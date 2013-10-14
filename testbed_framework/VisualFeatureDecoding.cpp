/*
 * VisualFeatureEncoding.cpp
 */
#include "VisualFeatureDecoding.h"

VisualFeatureDecoding::VisualFeatureDecoding(){

	BRISK_pModel::get_instance();

}

// Decoder for the keypoints
int VisualFeatureDecoding::decodeKeyPoints(vector<uchar> bitstream, vector<KeyPoint>& kpts, int imWidth, int imHeight)
{

	// inputs:  bitstream -> the encoded bitstream
	// outputs: kpts      -> the decoded vector of keypoints

	kpts.clear();

	int nbits_x = ceil(log2(imWidth)) + 2;
	int nbits_y = ceil(log2(imHeight)) + 2;
	int nbits_s = 10;

	int nbits_kpt = nbits_x + nbits_y + nbits_s;

	uchar cur_byte;

	int byte_idx = 0;
	int bit_idx = -1;
	int cur_bit;


	int nkpts =  floor( ((float)bitstream.size()*8.0) / (float)nbits_kpt );


	for(int n=0; n<nkpts; n++){

		int qx=0, qy=0, qs=0;

		for(int i=0; i<nbits_kpt; i++){

			// reset bit counter
			if(bit_idx<0){
				bit_idx = 7;
				cur_byte = bitstream[byte_idx];
				byte_idx++;
			}

			// read the current bit
			cur_bit = (cur_byte >> bit_idx) & 0x01;
			bit_idx--;


			if( i<nbits_x ){
				qx |= (cur_bit << (nbits_x - i - 1) );
			}
			else if ( i<nbits_x + nbits_y ){
				qy |= (cur_bit << (nbits_x + nbits_y - i - 1) );
			}
			else{
				qs |= (cur_bit << (nbits_x + nbits_y + nbits_s - i - 1) );
			}

		}

		kpts.push_back( KeyPoint( (float)qx/4.0, (float)qy/4.0, (float)qs/4.0 ) );



	}


	return 0;


};


// Decoder for binary descriptors
int VisualFeatureDecoding::decodeBinaryDescriptors(string descName, vector<uchar> bitstream, Mat &features, int nFeats)
{

	// inputs:  descName  -> name of the binary descriptor (e.g., BRISK, ORB, ...)
	//          bitstream -> the bitstream to be decoded
	//			order     -> the order in which the elements of each descriptor are fetched
	// outputs: features  <- the decoded features

	if( strcmp(descName.c_str(),"BRISK")==0 ){

		return decodeBRISK(bitstream,features,nFeats);

	}
	else{
		return -1;
	}

	return 0;

};

// Decoder for non-binary descriptors
int VisualFeatureDecoding::decodeNonBinaryDescriptors(Mat features, vector<uchar>& bitstream){

	return 0;
};


// Dummy Decoder for the keypoints
int VisualFeatureDecoding::dummy_decodeKeyPoints(vector<uchar> bitstream, vector<KeyPoint>& kpts)
{

	int nBytes = bitstream.size(); // size of the bitstream (in bytes)

	// convert from 'vector' to 'uchar array'
	uchar uchar_kpts_bitstream[nBytes];
	for(int i=0; i<nBytes; i++){
		uchar_kpts_bitstream[i] = bitstream[i];
	}

	// read the uchar array as a float array
	float *float_kpts_bitstream = (float*)&uchar_kpts_bitstream;

	int nFloats = (nBytes/sizeof(float)); // total number of floats

	// fill the vector of decoded keypoints
	for(int i=0; i<nFloats; i=i+3){
		kpts.push_back( KeyPoint(float_kpts_bitstream[i],float_kpts_bitstream[i+1],float_kpts_bitstream[i+2]) );
	}

	return 0;

};


// Dummy Decoder for binary descriptors
int VisualFeatureDecoding::dummy_decodeBinaryDescriptors(string descName, vector<uchar> bitstream, Mat& features)
{

	int descSize = 64;
	if ( descName.compare("BRISK")==0 ){
		descSize = BRISK_LENGTH_BYTES;
	}
	else if ( descName.compare("FREAK")==0 ){
		descSize = 64;
	}
	else if ( descName.compare("ORB")==0 || descName.compare("BRIEF")==0 ){
		descSize = 32;
	}

	int nBytes    = bitstream.size();  // size of the bitstream (in bytes)
	int nFeatures = (nBytes/descSize); // total number of features

	features = Mat(nFeatures,descSize,CV_8UC1);

	int count = 0;
	for(int i=0; i<descSize; i++){
		for(int j=0; j<nFeatures; j++){
			features.at<uchar>(j,i) = bitstream[count];
			count++;
		}
	}

	return 0;

};


// Dummy Decoder for non-binary descriptors
int VisualFeatureDecoding::dummy_decodeNonBinaryDescriptors(string descName, vector<uchar> bitstream, Mat& features)
{

	int descSize = 64;
	if ( descName.compare("SIFT")==0 || descName.compare("ExtendedSURF")==0){
		descSize = 128;
	}
	else if ( descName.compare("SURF")==0 ){
		descSize = 64;
	}

	int nBytes    = bitstream.size();  // size of the bitstream (in bytes)
	int nFeatures = (nBytes/sizeof(float))/descSize; // total number of features

	features.create(nFeatures, descSize, CV_32FC1);

	uchar float_uchar[sizeof(float)];

	int count = 0;
	for(int i=0; i<descSize; i++){
		for(int j=0; j<nFeatures; j++){

			for(unsigned int b=0; b<sizeof(float); b++){
				float_uchar[b] = bitstream[count+b];
			}

			features.at<float>(j,i) = *(float*)&float_uchar;

			count = count + sizeof(float);
		}
	}

	return 0;

};


int VisualFeatureDecoding::decodeBRISK(vector<uchar> bitstream, Mat &features, int nFeats){

	features = Mat(nFeats,BRISK_LENGTH_BYTES,CV_8UC1);

	// load the BRISK probability model
	BRISK_pModel *pModel = BRISK_pModel::get_instance();

	ac_decoder acd; // the encoder
	ac_model   acm; // the probability model used by ace

	int freq[2]; // vector of frequency (dynamically updated)

	ac_decoder_init (&acd, bitstream);
	ac_model_init (&acm, 2, NULL, 0);


	int decoded_bit;

	int index;

	for(int n=0; n<nFeats; n++){

		index = 0;
		freq[0] = (int)max(1, (int)round( pModel->getP0(0) * (double)AC_PRECISION ) );
		freq[1] = AC_PRECISION - freq[0];

		for(int i=0; i<BRISK_LENGTH_BYTES; i++){


			// extract and decode the single bits
			uchar cur_el = 0;
			for(int j=0;j<8;j++){

				decoded_bit = ac_decode_symbol_updateModel(&acd, &acm, freq);

				cur_el|= ( (uchar)decoded_bit << j ); // compute the decimal representation

				// update index and read the current probabilities
				index++;
				if (index < BRISK_LENGTH_BITS){
					if( decoded_bit == 0){
						freq[0] = (int)max(1, (int)round( pModel->getP0c0(index,index-1) * (double)AC_PRECISION ) );
						freq[1] = AC_PRECISION - freq[0];
					}
					else{
						freq[0] = (int)max(1, (int)round( pModel->getP0c1(index,index-1) * (double)AC_PRECISION ) );
						freq[1] = AC_PRECISION - freq[0];
					}
				}

			}


			// flip cur_el
			uchar revData = (cur_el & 0x80) >> 7 |
						    (cur_el & 0x40) >> 5 |
						    (cur_el & 0x20) >> 3 |
						    (cur_el & 0x10) >> 1 |
						    (cur_el & 0x08) << 1 |
						    (cur_el & 0x04) << 3 |
						    (cur_el & 0x02) << 5 |
						    (cur_el & 0x01) << 7;
			features.at<uchar>(n,i) = revData;

		}

	}

	ac_decoder_done (&acd);
	ac_model_done (&acm);

	return 0;

}


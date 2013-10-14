/*
 * VisualFeatureEncoding.cpp
 */
#include "VisualFeatureEncoding.h"

VisualFeatureEncoding::VisualFeatureEncoding(){

	BRISK_pModel::get_instance();

}

// Encoder for the keypoints
int VisualFeatureEncoding::encodeKeyPoints(vector<KeyPoint> kpts, vector<uchar>& bitstream, int imWidth, int imHeight)
{

	// inputs:  kpts      -> vector of keypoints
	// outputs: bitstream <- the encoded bitstream

	bitstream.clear(); // clear the vector

	int nbits_x = ceil(log2(imWidth)) + 2;
	int nbits_y = ceil(log2(imHeight)) + 2;
	int nbits_s = 10;

	int nbits_kpt = nbits_x + nbits_y + nbits_s;

	uchar buffer = 0;

	long qx, qy, qs;

	int bit_idx = 7;
	int cur_bit;

	for(int n=0; n<(int)kpts.size(); n++){

		// quantize the keypoints (precision 1/4 pixel)
		qx = round(kpts[n].pt.x * 4);
		qy = round(kpts[n].pt.y * 4);
		qs = round(kpts[n].size * 4);

		// process the single bits
		for(int i=0; i<nbits_kpt; i++){

			if( i<nbits_x ){
				cur_bit = ( qx >> (nbits_x - i - 1) ) & 0x0001;
			}
			else if ( i<nbits_x + nbits_y ){
				cur_bit = ( qy >> (nbits_x + nbits_y - i - 1) ) & 0x0001;
			}
			else{
				cur_bit = ( qs >> (nbits_x + nbits_y + nbits_s - i - 1) ) & 0x0001;
			}

			// update the 8-bits buffer
			buffer |= cur_bit << bit_idx;
			bit_idx--;

			// when the buffer is full, append it to the vector; then reset the buffer
			if (bit_idx<0){
				bit_idx = 7;
				bitstream.push_back(buffer);
				buffer = 0;
			}

		}

	}

	// append the remaining bits, if any
	if( bit_idx!=7 ){
		bitstream.push_back(buffer);
	}

	return 0;

};


// Encoder for binary descriptors
int VisualFeatureEncoding::encodeBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream)
{

	// inputs:  descName  -> name of the binary descriptor (e.g., BRISK, ORB, ...)
	//          features  -> matrix containing the feature vectors to be encoded
	//			order     -> the order in which the elements of each descriptor are fetched
	// outputs: bitstream <- the encoded bitstream

	bitstream.clear();

	if( strcmp(descName.c_str(),"BRISK")==0 ){

		return encodeBRISK(features, bitstream);

	}
	else{
		return -1;
	}

	return 0;

};


int VisualFeatureEncoding::encodeNonBinaryDescriptors(Mat features, vector<uchar>& bitstream)
{

	// ENCODER
	return 0;
};


// Dummy Encoder for the keypoints
int VisualFeatureEncoding::dummy_encodeKeyPoints(vector<KeyPoint> kpts, vector<uchar>& bitstream)
{

	// Define a contiguous representation for keypoints
	typedef struct{
		float x;
		float y;
		float size;
	} my_kpt;

	// Array of keypoints
	my_kpt stream_kpts[kpts.size()];

	// Fill the array with needed information
	for(unsigned int i=0; i<kpts.size(); i++){
		stream_kpts[i].x = kpts[i].pt.x;
		stream_kpts[i].y = kpts[i].pt.y;
		stream_kpts[i].size = kpts[i].size;
	}

	// Read the array as a vector of char
	uchar *char_stream_kptsbitstream = (uchar*)&stream_kpts;

	// Creation of the bitstream
	int nBytes = kpts.size()*3*sizeof(float); // size of the bitstream (in bytes)
	for(int i=0; i<nBytes; i++){ // fill the bitstream
		bitstream.push_back(char_stream_kptsbitstream[i]);
	}

	return 0;

};


// Dummy Encoder for binary descriptors
int VisualFeatureEncoding::dummy_encodeBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream)
{

	bitstream.clear();

	cout << "(Dummy) Encoding " << descName << " descriptors" << endl;

	int descSize = features.cols; // size of the descriptor
	int numDesc  = features.rows; // number of descriptors

	// Create the bitstream
	for(int i=0; i<descSize; i++){
		for(int j=0; j<numDesc; j++){
			bitstream.push_back(features.at<uchar>(j,i));
		}
	}

	cout << "(Dummy) Encoding: OK " << endl;
	return 0;

};


// Dummy Encoder for non-binary descriptors
int VisualFeatureEncoding::dummy_encodeNonBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream)
{

	cout << "(Dummy) Encoding " << descName << " descriptors" << endl;

	int descSize = features.cols; // size of the descriptor
	int numDesc  = features.rows; // number of descriptors

	// Create the bitstream
	for(int i=0; i<descSize; i++){
		for(int j=0; j<numDesc; j++){

			float prova = features.at<float>(j,i);
			uchar *char_float = (uchar*)&prova;

			for( unsigned int b=0; b<sizeof(float); b++){
				bitstream.push_back(char_float[b]);
			}


		}
	}

	return 0;

};



int VisualFeatureEncoding::encodeBRISK(Mat features, vector<uchar>& bitstream){

	// load the BRISK probability model
	BRISK_pModel *pModel = BRISK_pModel::get_instance();

	cout << "START ENCODING..." << endl;
	ac_encoder ace; // the encoder
	ac_model   acm; // the probability model used by ace

	int freq[2]; // vector of frequency (dynamically updated)

	ac_encoder_init (&ace, bitstream); // init the encoder
	ac_model_init (&acm, 2, NULL, 0);  // init the model

	// start coding

	for(int n=0; n<features.rows; n++){

		int index=0;
		int cur_bit, prev_bit;

		for(int i=0; i<features.cols; i++){

			// get the current element
			uchar cur_el = features.at<uchar>(n,i);

			//convert it into binary
			int temp_el[8];
			for(int j=0;j<8;j++){
				temp_el[7-j] = (cur_el>>j) & 0x0001;
			}

			// extract and decode the single bits
			//int cur_bit, prev_bit;

			for(int j=0;j<8;j++){

				prev_bit = cur_bit;
				cur_bit = temp_el[j];// (cur_el >> j) & 0x0001;
				// read the probabilities
				if( index == 0){
					freq[0] = (int)max(1, (int)round( pModel->getP0(0) * (double)AC_PRECISION ) );
					freq[1] = AC_PRECISION - freq[0];
				}
				else{

					if( prev_bit == 0){
						freq[0] = (int)max(1, (int)round( pModel->getP0c0(index,index-1) * (double)AC_PRECISION ) );
						freq[1] = AC_PRECISION - freq[0];
					}
					else{
						freq[0] = (int)max(1, (int)round( pModel->getP0c1(index,index-1) * (double)AC_PRECISION ) );
						freq[1] = AC_PRECISION - freq[0];
						}

					}
				if (freq[0]==AC_PRECISION){
					freq[0] = AC_PRECISION-1;
					freq[1] = 1;
				}

				ac_encode_symbol_updateModel(&ace, &acm, cur_bit, freq);

				index++;

			}

		}

	}


	ac_encoder_done (&ace);
	ac_model_done (&acm);

	return 0;

}


#include <fstream>
#include <iostream>
#include <list>
#include <algorithm>
#include <stdlib.h>

#include "ImageAcquisition.h"
#include "VisualFeatureExtraction.h"
#include "VisualFeatureEncoding.h"
#include "DataTransmission.h"

using namespace std;
using namespace cv;



int main(int argc, char ** argv) {

	
	/* SOME INITIAL SETTINGS: */


	  // Initialize the RADIO device
	  DataTransmission *dataTx = new DataTransmission();
	  serial_source src = dataTx->openSerialRADIO(argv[1],115200,0); //device, baudrate, non-blocking flag
	  
	  // Initialize the webcam
	  ImageAcquisition *imAcq = new ImageAcquisition(0,640,480); // set Device 0, resolution 640x480 pixels
	  	
	  // Declare the VisualFeatureExtraction object
	  VisualFeatureExtraction *featExtract = new VisualFeatureExtraction;
	
	  // Set the BRISK detector
	  int BRISK_threshold = 60;
	  BRISK_detParams detPrms(BRISK_threshold,4);
	  featExtract->setDetector("BRISK", &detPrms); 

	  // Set the BRISK descriptor
	  vector<int> pairs; // will contain the selected BRISK pairs, read from file

	  int aux_pairs[BRISK_LENGTH_BITS];
	  ifstream fileRank;
	  if ( BRISK_LENGTH_BITS == 512 ){
	  	fileRank.open("brisk/ranking_original_optimized512.bin",ios::in|ios::binary);
	  }
	  else if (BRISK_LENGTH_BITS == 256 ){
	  	fileRank.open("brisk/ranking_original_optimized256.bin",ios::in|ios::binary);
	  }
	  fileRank.read((char*)aux_pairs,sizeof(int)*BRISK_LENGTH_BITS);
	  fileRank.close();
	  for(int i=0; i<BRISK_LENGTH_BITS; i++){
	  	pairs.push_back(aux_pairs[i]);
	  }

	  BRISK_descParams descPrms(pairs);
	  featExtract->setDescriptor("BRISK", &descPrms);


	  // Initialize the encoder for visual features and keypoints
	  VisualFeatureEncoding *encoder = new VisualFeatureEncoding;	

	/*___________________________________________________________________________________________________________*/


	

	/* START THE PROCESS */


	// Take the picture and convert it to gray-scale	
	Mat imRGB, imGray;	
	imAcq->takePicture(imRGB);
	imAcq->RGB2Gray(imRGB,imGray);
	int imgID = 0; // define an image id (0.....15) 
	
	// --------------------------------------------------------------------------------------------------
	//                                            ATC example
	// --------------------------------------------------------------------------------------------------


		// Extract visual features
		vector<KeyPoint> kpts; // vector of keypoints
		Mat features;          // feature vectors
		featExtract->extractFeatures(imGray,&kpts,&features);

		// Sort and cut the feature vectors
		int maxFeatures = 100;
		featExtract->cutFeatures(kpts,features,maxFeatures);

		// Encode keypoints
		vector<uchar> kp_bitstream; // bitstream of keypoints
		encoder->encodeKeyPoints(kpts, kp_bitstream,640,480);

		// Encode visual features
		vector<uchar> ft_bitstream; // bitstream of features		
		encoder->encodeBinaryDescriptors("BRISK", features, ft_bitstream);

		// DATA TRANSMISSION
		// 1) send the image info packet		   
		   bool compressed_features = true; // specify if features have been compressed or not
		   int nFeats = features.rows;      // number of feature vectors
		   bool atc_cta = true;             // select ATC paradigm		   
		   dataTx->sendImgInfoRADIO(src,imgID,atc_cta,compressed_features,"BRISK",nFeats,640,480);

		// 2) send the data packet		   
		   cout << endl << "Sending visual features...." << endl;		   		   
		   dataTx->sendFeaturesRADIO(src,imgID,nFeats,kp_bitstream,ft_bitstream);
		   cout << "OK" << endl;			
		   
	// --------------------------------------------------------------------------------------------------
	//                                            CTA example
	// --------------------------------------------------------------------------------------------------


		// JPEG compression of the gray-scale image
		vector<uchar> JPEGbuff; // JPEG bitstream
		int jpeg_qf = 50;       // quality factor
		imAcq->compressJPEG(imGray,jpeg_qf,JPEGbuff);     
		

		// DATA TRANSMISSION	
		// 1) send the image info packet	
		   atc_cta = false; // select CTA paradigm		
		   dataTx->sendImgInfoRADIO(src,imgID,false);

		// 2) send the data packet
		   cout << endl << "Sending jpeg bitstream...." << endl;	
		   dataTx->sendJpegRADIO(src,imgID,JPEGbuff);
		   cout << "OK" << endl;	

	
	return 0;

}

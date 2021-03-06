#include <fstream>
#include <iostream>
#include <list>
#include <algorithm>
#include <stdlib.h>

#include "DataTransmission.h"
#include "VisualFeatureDecoding.h"

#include "opencv2/video/video.hpp"

using namespace std;
using namespace cv;



int main(int argc, char ** argv) {

	
	/* SOME INITIAL SETTINGS: */


	  // Initialize the RADIO device
	  DataTransmission *dataTx = new DataTransmission();
	  serial_source src = dataTx->openSerialRADIO(argv[1],115200,0); //device, baudrate, non-blocking flag
	  	  
	  // Initialize the decoder for visual features and keypoints
	  VisualFeatureDecoding *decoder = new VisualFeatureDecoding;	

	/*___________________________________________________________________________________________________________*/


	uchar   *packet;
	int      packetLength;
	imgInfo  ATC_imageInfo, CTA_imageInfo;

	// --------------------------------------------------------------------------------------------------
	//                               Receive and extract the ATC data
	// --------------------------------------------------------------------------------------------------

		cout << "Waiting for data......" << endl;
		
		// Receive the image info packet			
		dataTx->receivePacketRADIO(src, &packet, &packetLength);
		if( dataTx->parseMessage(packet) != IMG_INFO_PKT ){
			cout << "Wrong packet type!" << endl;
			return -1;
		}

		cout << endl << "Receiving ATC data (keypoints and visual features)" << endl;

		// Read the information about ATC image	
		dataTx->getImgInfo(packet, ATC_imageInfo);

		// Print some information about the image
		if(ATC_imageInfo.atc_cta == true){
			cout << "Type: ATC" << endl;
			cout << "Algorithm: " << ATC_imageInfo.descName << endl;
			cout << "Number of features: " << ATC_imageInfo.nFeats << endl;
			cout << "Image size = " << ATC_imageInfo.h << " x " << ATC_imageInfo.w << endl;
			if(ATC_imageInfo.compressed == true){
				cout << "Compressed stream" << endl;
			}
			else{
				cout << "Non-compressed stream" << endl;
			}
		}
		else{
			cout << "Error!" << endl;
			return -1;
		}


		// Receive the ATC data packet			
		dataTx->receivePacketRADIO(src, &packet, &packetLength);
		if( dataTx->parseMessage(packet) != ATC_IMG_PKT ){
			cout << "Wrong packet type!" << endl;
			return -1;
		}

		// Read the bitstream of keypoints from the data packet
		vector<uchar> kp_bitstream;
		dataTx->getEncodedKeypoints(packet, packetLength, ATC_imageInfo, kp_bitstream);
		
		// Read the bitstream of features from the data packet
		vector<uchar> ft_bitstream;
		dataTx->getEncodedFeatures(packet, packetLength, ATC_imageInfo, ft_bitstream);

	// --------------------------------------------------------------------------------------------------
	//                               Receive and extract the CTA data
	// --------------------------------------------------------------------------------------------------


		cout << endl << "Receiving CTA data (jpeg bitstream)" << endl;

		// Receive the image info packet	
		dataTx->receivePacketRADIO(src, &packet, &packetLength);
		if( dataTx->parseMessage(packet) != IMG_INFO_PKT ){
			cout << "Wrong packet type!" << endl;
			return -1;
		}

		// Read the information about ATC image	
		dataTx->getImgInfo(packet, CTA_imageInfo);
		
		// Print some information about the image
		if(CTA_imageInfo.atc_cta == false){
			cout << "Type: CTA" << endl;
		}
		else{
			cout << "Error!" << endl;
			return -1;
		}

		// Receive the ATC data packet		
		dataTx->receivePacketRADIO(src, &packet, &packetLength);
		if( dataTx->parseMessage(packet) != CTA_IMG_PKT ){
			cout << "Wrong packet type!" << endl;
			return -1;
		}

		// Read the JPEG bitstream from the data packet
		vector<uchar> JPEG_bitstream;
		dataTx->getEncodedJPEG(packet, packetLength, JPEG_bitstream);




	// --------------------------------------------------------------------------------------------------
	//                                  Decode and draw received data
	// --------------------------------------------------------------------------------------------------
		
			   			
		// Decode the keypoints from the bitstream
		vector<KeyPoint> kpts;		
		decoder->decodeKeyPoints(kp_bitstream, kpts, ATC_imageInfo.w, ATC_imageInfo.h);

		// Decode the features from the bitstream
		Mat features;
		int nFeats = kpts.size();
		cout << "Decoding features: " << nFeats << endl;
		decoder->decodeBinaryDescriptors("BRISK", ft_bitstream, features, nFeats);
		
		// Decode the JPEG bitstream
		Mat imJPEG;
		imJPEG = imdecode(JPEG_bitstream,1);

	   	// Draw the received image and the keypoints	   		
		Mat kpts_img;
		drawKeypoints(imJPEG,kpts,kpts_img,Scalar(255,0,0),DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
		imshow("Received image and keypoints",kpts_img);
		waitKey(0);


	return 0;

}

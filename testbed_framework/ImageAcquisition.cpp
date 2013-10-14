#include "ImageAcquisition.h"
#include <pthread.h>


void* grab_function( void *ptr )
{
	VideoCapture *loc_cap;
	loc_cap = (VideoCapture*) ptr;
	while(1){
		loc_cap->grab();
	}
}


ImageAcquisition::ImageAcquisition(){
	
	openCamDevice(0,640,480);

};

ImageAcquisition::ImageAcquisition(int ID){
	
	openCamDevice(ID,640,480);

};

ImageAcquisition::ImageAcquisition(int ID, int w, int h){
	
	openCamDevice(ID,w,h);
	
};

ImageAcquisition::~ImageAcquisition(){

	cap.release();

};


int ImageAcquisition::openCamDevice(int ID, int w, int h){

	cap = VideoCapture(ID); // open the default camera
	if(!cap.isOpened()){  // check if we succeeded
		cout << "Error opening the device" << endl;
		return -1;
	}

	cap.set(CV_CAP_PROP_FRAME_WIDTH,w);
	cap.set(CV_CAP_PROP_FRAME_HEIGHT,h);

	pthread_t grab_thread;
	pthread_create( &grab_thread, NULL, grab_function, (void*) &cap);

	return 0;

};


int ImageAcquisition::takePicture(Mat &frame){
	cap.read(frame);
	return 0;
};


int ImageAcquisition::RGB2Gray(Mat RGBpicture, Mat& GrayPicture){

	cvtColor(RGBpicture, GrayPicture, CV_BGR2GRAY);
	return(0);
};

int ImageAcquisition::compressJPEG(Mat picture, int QF, vector<uchar>& JPEGbitstream){

	vector<int> param = vector<int>(2);
	param[0] = CV_IMWRITE_JPEG_QUALITY;
	param[1] = QF;

	cv::imencode(".jpg",picture,JPEGbitstream,param);

	return 0;

};

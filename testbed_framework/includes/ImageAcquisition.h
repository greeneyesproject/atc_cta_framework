#ifndef _IMAGEACQUISITION_H_
#define _IMAGEACQUISITION_H_


#include <iostream>
#include <stdio.h>
#include <fstream>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


class ImageAcquisition
{

	VideoCapture cap;
	int openCamDevice(int ID, int w, int h);

public:
	
	ImageAcquisition();
	ImageAcquisition(int deviceID);
	ImageAcquisition(int deviceID, int IM_width, int IM_height);
	~ImageAcquisition();

	int takePicture(Mat &picture);
	int RGB2Gray(Mat RGBpicture, Mat& GrayPicture);
	int compressJPEG(Mat picture, int QF, vector<uchar>& JPEGbitstream);

};

#endif

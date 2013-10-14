#ifndef _VISUALFEATUREEXTRACTION_H_
#define _VISUALFEATUREEXTRACTION_H_

#include <iostream>
#include <stdio.h>
#include <fstream>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "brisk/brisk.h"
#include "DetDescParams.h"

using namespace cv;
using namespace std;


// sorting predicate
struct greater_than_response
{
    inline bool operator() (const KeyPoint & kp1, const KeyPoint & kp2)
    {
		return (kp1.response > kp2.response);
    }
};


class VisualFeatureExtraction
{

	Ptr<FeatureDetector> detector;
	detParams *myDetParams;

	Ptr<DescriptorExtractor> descriptor;
	descParams *myDescParams;

	int init_detector(string detName);
	int init_descriptor(string descName);


public:

	int setDetector(string detName);
	int setDetector(string detName, detParams* params);

	int setDescriptor(string descName);
	int setDescriptor(string descName, descParams* params);

	int extractFeatures(Mat imgGray, vector<KeyPoint> *kpts, Mat *features);

	int cutFeatures(vector<KeyPoint> &kpts, Mat &features, int maxFeats);


};

#endif

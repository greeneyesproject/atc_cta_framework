/*
 * VisualFeatureDecoding.h
 */
#ifndef VISUALFEATUREDECODING_H_
#define VISUALFEATUREDECODING_H_

#include <iostream>
#include <stdio.h>
#include <math.h>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/features2d/features2d.hpp"

#include "../thirdparty/coder/ac_extended.h"

#include "CodecParams.h"

using namespace cv;
using namespace std;


class VisualFeatureDecoding
{

public:

	VisualFeatureDecoding();
	int decodeKeyPoints(vector<uchar> bitstream, vector<KeyPoint>& kpts, int imWidth, int imHeight);
	int decodeBinaryDescriptors(string descName, vector<uchar> bitstream, Mat &features, int Nfeats);
	int decodeNonBinaryDescriptors(Mat features, vector<uchar>& bitstream);

	int dummy_decodeKeyPoints(vector<uchar> bitstream, vector<KeyPoint>& kpts);
	int dummy_decodeBinaryDescriptors(string descName, vector<uchar> bitstream, Mat& features);
	int dummy_decodeNonBinaryDescriptors(string descName, vector<uchar> bitstream, Mat& features);

private:

	int decodeBRISK(vector<uchar> bitstream, Mat &features, int nFeats);
};


#endif /* VISUALFEATUREDECODING_H_ */

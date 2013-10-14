/*
 * VisualFeatureEncoding.h
 */
#ifndef VISUALFEATUREENCODING_H_
#define VISUALFEATUREENCODING_H_

#include <iostream>
#include <stdio.h>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/features2d/features2d.hpp"

#include "../thirdparty/coder/ac_extended.h"

#include "CodecParams.h"

using namespace cv;
using namespace std;


class VisualFeatureEncoding
{

public:

	VisualFeatureEncoding();
	int encodeKeyPoints(vector<KeyPoint> kpts, vector<uchar>& bitstream, int imWidth, int imHeight);
	int encodeBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream);
	int encodeNonBinaryDescriptors(Mat features, vector<uchar>& bitstream);

	int dummy_encodeKeyPoints(vector<KeyPoint> kpts, vector<uchar>& bitstream);
	int dummy_encodeBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream);
	int dummy_encodeNonBinaryDescriptors(string descName, Mat features, vector<uchar>& bitstream);

private:

	int encodeBRISK(Mat features, vector<uchar>& bitstream);

};


#endif /* VISUALFEATUREENCODING_H_ */

/*
 * DetDescParams.h
 */

#ifndef DETDESCPARAMS_H_
#define DETDESCPARAMS_H_

using namespace cv;
using namespace std;

struct detParams{};  // abstract structure for detector parameters
struct descParams{}; // abstract structure for descriptor parameters


/*
 *                   -------       DETECTORS     ------------
 */



/*
 * Parameters for FAST detector
 */
struct FAST_detParams:detParams{

	int threshold;
	int nonmaxSuppression;

	FAST_detParams(int _threshold=10,
				   bool _nonmaxSuppression=true)

	{
		threshold = _threshold;
		nonmaxSuppression = _nonmaxSuppression;
	}

};


/*
 * Parameters for DynFAST detector
 */
struct DynFAST_detParams:detParams{

	int min_features;
	int max_features;
	int max_iters;

	DynFAST_detParams(int _min_features=400,
			       	  int _max_features=500,
			       	  int _max_iters=5)

	{
		min_features = _min_features;
		max_features = _max_features;
		max_iters    = _max_iters;
	}

};


/*
 * Parameters for STAR detector
 */
struct STAR_detParams:detParams{

	int maxSize;
	int responseThreshold;
	int lineThresholdProjected;
	int lineThresholdBinarized;
	int suppressNonmaxSize;

	STAR_detParams(int _maxSize=45,
			       int _responseThreshold=30,
                   int _lineThresholdProjected=10,
                   int _lineThresholdBinarized=8,
                   int _suppressNonmaxSize=5)
	{
		maxSize  = _maxSize;
		responseThreshold = _responseThreshold;
		lineThresholdProjected = _lineThresholdProjected;
		lineThresholdBinarized = _lineThresholdBinarized;
		suppressNonmaxSize = _suppressNonmaxSize;
	}

};

/*
 * Parameters for AGAST detector
 */
struct AGAST_detParams:detParams{

	int threshold;

	AGAST_detParams(int _threshold = 60){
		threshold = _threshold;
	}

};


/*
 * Parameters for BRISK detector
 */
struct BRISK_detParams:detParams{

	int threshold;
	int octaves;

	BRISK_detParams(int _threshold = 60, int _octaves = 4)
	{
		threshold = _threshold;
		octaves   = _octaves;
	}

};


/*
 * Parameters for ORB detector
 */
struct ORB_detParams:detParams{

	int nfeatures;
	float scaleFactor;
	int nlevels;
	int edgeThreshold;
	int firstLevel;
	int scoreType;

	ORB_detParams(int _nfeatures = 500,
			      float _scaleFactor = 1.2f,
			      int _nlevels = 8,
			      int _edgeThreshold = 31,
			      int _firstLevel = 0,
			      int _scoreType=ORB::HARRIS_SCORE)
	{
		nfeatures = _nfeatures;
		scaleFactor   = _scaleFactor;
		nlevels = _nlevels;
		edgeThreshold = _edgeThreshold;
		firstLevel = _firstLevel;
		scoreType = _scoreType;
	}

};


/*
 * Parameters for SURF detector
 */
struct SURF_detParams:detParams{

	double hessianThreshold;
	int    nOctaves;
	int    nOctaveLayers;

	SURF_detParams(double _hessianThreshold=100,
				   int    _nOctaves=4,
				   int    _nOctaveLayers=2)

	{
		hessianThreshold = _hessianThreshold;
		nOctaves = _nOctaves;
		nOctaveLayers = _nOctaveLayers;
	}

};


/*
 * Parameters for SIFT detector
 */
struct SIFT_detParams:detParams{

	int    nfeatures;
    int    nOctaveLayers;
	double contrastThreshold;
	double edgeThreshold;
	double sigma;

	SIFT_detParams(int    _nfeatures=0,
			       int    _nOctaveLayers=3,
			       double _contrastThreshold=0.04,
			       double _edgeThreshold=10,
			       double _sigma=1.6)

	{
		nfeatures         = _nfeatures;
		nOctaveLayers     = _nOctaveLayers;
		contrastThreshold = _contrastThreshold;
		edgeThreshold     = _edgeThreshold;
		sigma             = _sigma;
	}

};




/*
 *                   -------       DESCRIPTORS     ------------
 */



/*
 * Parameters for BRISK descriptor
 */
struct BRISK_descParams:descParams{

	vector<int> inputPairs;
	bool  rotationInvariance;
	bool  scaleInvariance;
	float patternScale;

	BRISK_descParams(vector<int> &_inputPairs,
					 bool _rotationInvariance = true,
			 	 	 bool _scaleInvariance = true,
			 	 	 float _patternScale = 1.0f)
	{
		inputPairs          = _inputPairs;
		rotationInvariance  = _rotationInvariance;
		scaleInvariance     = _scaleInvariance;
		patternScale        = _patternScale;
	}

};


/*
 * Parameters for BRIEF descriptor
 */
struct BRIEF_descParams:descParams{

	int bytes;

	BRIEF_descParams(int _bytes=32)
	{
		bytes  = _bytes;
	}

};


/*
 * Parameters for ORB descriptor
 */
struct ORB_descParams:descParams{

	int WTA_K;
	int patchSize;

	ORB_descParams(int _WTA_K=2, int _patchSize=31)
	{
		WTA_K = _WTA_K;
		patchSize = _patchSize;
	}

};


/*
 * Parameters for FREAK descriptor
 */
struct FREAK_descParams:descParams{

	bool  orientationNormalized;
	bool  scaleNormalized;
	float patternScale;
	int   nOctaves;

	FREAK_descParams(bool  _orientationNormalized=true,
				     bool  _scaleNormalized=true,
				     float _patternScale=22.0f,
				     int   _nOctaves=4)
	{
		orientationNormalized = _orientationNormalized;
		scaleNormalized = _scaleNormalized;
		patternScale = _patternScale;
		nOctaves = _nOctaves;
	}

};


/*
 * Parameters for SURF (64floats) descriptor
 */
struct SURF_descParams:descParams{

	bool  upright;

	SURF_descParams(bool  _upright=false)
	{
		upright  = _upright;
	}

};


/*
 * Parameters for ExtendedSURF (128floats) descriptor
 */
struct ExtendedSURF_descParams:descParams{

	bool  upright;

	ExtendedSURF_descParams(bool  _upright=false)
	{
		upright  = _upright;
	}

};


/*
 * Parameters for SIFT descriptor
 */
struct SIFT_descParams:descParams{

	SIFT_descParams(){}

};

#endif /* DETDESCPARAMS_H_ */

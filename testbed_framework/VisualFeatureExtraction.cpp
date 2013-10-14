#include "VisualFeatureExtraction.h"


/*
 * Set the detector with the default parameters
 */
int VisualFeatureExtraction::setDetector(string detName){
	
	// Assign the default parameters for the specified detector algorithm
	if(detName.compare("STAR")==0){
		myDetParams = new STAR_detParams();
	}
	else if(detName.compare("FAST")==0){
		myDetParams = new FAST_detParams();
	}
	else if(detName.compare("DynFAST")==0){
		myDetParams = new DynFAST_detParams();
	}
	else if(detName.compare("AGAST")==0){
		myDetParams = new AGAST_detParams();
	}
	else if(detName.compare("BRISK")==0){
		myDetParams = new BRISK_detParams();
	}
	else if(detName.compare("ORB")==0){
		myDetParams = new ORB_detParams();
	}
	else if(detName.compare("SURF")==0){
		myDetParams = new SURF_detParams();
	}
	else if(detName.compare("SIFT")==0){
		myDetParams = new SIFT_detParams();
	}
	else{
		return -1;
	}

	// Initialize the detector
	init_detector(detName);

	return 0;

}

/*
 * Set the detector with custom parameters
 */
int VisualFeatureExtraction::setDetector(string detName, detParams* params){

	myDetParams = params;
	init_detector(detName);

	return 0;

}

/*
 * Create the detector using the specified parameters
 */
int VisualFeatureExtraction::init_detector(string detName){

	if(detName.compare("STAR")==0){
		detector = new StarFeatureDetector( ((STAR_detParams*)myDetParams)->maxSize,
											((STAR_detParams*)myDetParams)->responseThreshold,
											((STAR_detParams*)myDetParams)->lineThresholdProjected,
											((STAR_detParams*)myDetParams)->lineThresholdBinarized,
											((STAR_detParams*)myDetParams)->suppressNonmaxSize );
	}
	else if(detName.compare("FAST")==0){
		detector = new FastFeatureDetector( ((FAST_detParams*)myDetParams)->threshold,
											((FAST_detParams*)myDetParams)->nonmaxSuppression );
	}
	else if(detName.compare("DynFAST")==0){
		detector = new DynamicAdaptedFeatureDetector( new FastAdjuster(),
													  ((DynFAST_detParams*)myDetParams)->min_features,
													  ((DynFAST_detParams*)myDetParams)->max_features,
													  ((DynFAST_detParams*)myDetParams)->max_iters );
	}
	else if(detName.compare("AGAST")==0){
		detector = new BriskFeatureDetector( ((AGAST_detParams*)myDetParams)->threshold,0);
	}
	else if(detName.compare("BRISK")==0){
		detector = new BriskFeatureDetector( ((BRISK_detParams*)myDetParams)->threshold,
											 ((BRISK_detParams*)myDetParams)->octaves );
	}
	else if(detName.compare("ORB")==0){
		detector = new ORB( ((ORB_detParams*)myDetParams)->nfeatures,
							((ORB_detParams*)myDetParams)->scaleFactor,
							((ORB_detParams*)myDetParams)->nlevels,
							((ORB_detParams*)myDetParams)->edgeThreshold,
							((ORB_detParams*)myDetParams)->firstLevel,
							2,
							((ORB_detParams*)myDetParams)->scoreType );
	}
	else if(detName.compare("SURF")==0){
		detector = new SURF( ((SURF_detParams*)myDetParams)->hessianThreshold,
							 ((SURF_detParams*)myDetParams)->nOctaves,
							 ((SURF_detParams*)myDetParams)->nOctaveLayers );
	}
	else if(detName.compare("SIFT")==0){
		new SIFT();
		detector = new SIFT( ((SIFT_detParams*)myDetParams)->nfeatures,
							 ((SIFT_detParams*)myDetParams)->nOctaveLayers,
							 ((SIFT_detParams*)myDetParams)->contrastThreshold,
							 ((SIFT_detParams*)myDetParams)->edgeThreshold,
							 ((SIFT_detParams*)myDetParams)->sigma );
	}
	else{
		return -1;
	}


	return 0;
}





/*
 * Set the detector with the default parameters
 */
int VisualFeatureExtraction::setDescriptor(string descName){

	// Assign the default parameters for the specified detector algorithm
	if(descName.compare("BRISK")==0){

		int nPairs = BRISK_LENGTH_BITS;
		vector<int> pairs;
		int aux_pairs[nPairs];
		ifstream fileRank;
		if( BRISK_LENGTH_BITS == 512 ){
			fileRank.open("brisk/ranking_original_optimized512.bin",ios::in|ios::binary);
		}
		else if ( BRISK_LENGTH_BITS == 256 ){
			fileRank.open("brisk/ranking_original_optimized256.bin",ios::in|ios::binary);
		}
		fileRank.read((char*)aux_pairs,sizeof(int)*nPairs);
		fileRank.close();
		for(int i=0; i<nPairs; i++){
			pairs.push_back(aux_pairs[i]);
		}
		myDescParams = new BRISK_descParams(pairs);

	}
	else if(descName.compare("BRIEF")==0){
		myDescParams = new BRIEF_descParams();
	}
	else if(descName.compare("ORB")==0){
		myDescParams = new ORB_descParams();
	}
	else if(descName.compare("FREAK")==0){
		myDescParams = new FREAK_descParams();
	}
	else if(descName.compare("SURF")==0){
		myDescParams = new SURF_descParams();
	}
	else if(descName.compare("ExtendedSURF")==0){
		myDescParams = new ExtendedSURF_descParams();
	}
	else if(descName.compare("SIFT")==0){
		myDescParams = new SIFT_descParams();
	}
	else{
		return -1;
	}

	// Initialize the detector
	init_descriptor(descName);

	return 0;

}

/*
 * Set the detector with custom parameters
 */
int VisualFeatureExtraction::setDescriptor(string descName, descParams* params){

	myDescParams = params;
	init_descriptor(descName);

	return 0;

}

/*
 * Create the detector using the specified parameters
 */
int VisualFeatureExtraction::init_descriptor(string descName){

	if(descName.compare("BRISK")==0){
		descriptor = new BriskDescriptorExtractor( ((BRISK_descParams*)myDescParams)->inputPairs,
												   ((BRISK_descParams*)myDescParams)->rotationInvariance,
												   ((BRISK_descParams*)myDescParams)->scaleInvariance,
												   ((BRISK_descParams*)myDescParams)->patternScale );
	}
	if(descName.compare("BRIEF")==0){
		descriptor = new BriefDescriptorExtractor( ((BRIEF_descParams*)myDescParams)->bytes );
	}
	if(descName.compare("ORB")==0){
		new ORB();
		descriptor = new ORB(500,1.2f,8,31,0,
						     ((ORB_descParams*)myDescParams)->WTA_K,
						     ORB::HARRIS_SCORE,
						     ((ORB_descParams*)myDescParams)->patchSize );
	}
	if(descName.compare("FREAK")==0){
		new FREAK();
		descriptor = new FREAK( ((FREAK_descParams*)myDescParams)->orientationNormalized,
								((FREAK_descParams*)myDescParams)->scaleNormalized,
								((FREAK_descParams*)myDescParams)->patternScale,
								((FREAK_descParams*)myDescParams)->nOctaves );
	}
	else if(descName.compare("SURF")==0){
		descriptor = new SURF( 100,4,2,false,
				               ((SURF_descParams*)myDescParams)->upright );
	}
	else if(descName.compare("ExtendedSURF")==0){
		descriptor = new SURF( 100,4,2,true,
							   ((SURF_descParams*)myDescParams)->upright );
	}
	else if(descName.compare("SIFT")==0){
		descriptor = new SIFT();
	}
	else{
		return -1;
	}


	return 0;
}


int VisualFeatureExtraction::extractFeatures(Mat imgGray, vector<KeyPoint> *kpts, Mat *features){

	detector->detect(imgGray,*kpts);
	descriptor->compute(imgGray,*kpts,*features);

	return 0;
}


int VisualFeatureExtraction::cutFeatures(vector<KeyPoint> &kpts, Mat &features, int maxFeats){

	// store hash values in a map
	map<size_t,unsigned int> keyp_hashes;
	vector<KeyPoint>::iterator itKeyp;

	Mat sorted_features;

	unsigned int iLine = 0;
	for ( itKeyp = kpts.begin(); itKeyp < kpts.end() ; itKeyp++, iLine++)
		keyp_hashes[(*itKeyp).hash()] = iLine;

	// sort values according to the response
	std::sort(kpts.begin(),kpts.end(),greater_than_response());
	// create a new descriptor matrix with the sorted keypoints
	sorted_features.create(0,features.cols,features.type());
	sorted_features.reserve(features.rows);
	for ( itKeyp = kpts.begin(); itKeyp < kpts.end() ; itKeyp++)
		sorted_features.push_back(features.row(keyp_hashes[(*itKeyp).hash()]));

	features = sorted_features.clone();

	// select the first maxFeats features
	if ( kpts.size()>maxFeats ){
		vector<KeyPoint> cutKpts(kpts.begin(), kpts.begin() + maxFeats);
		kpts = cutKpts;

		features = features.rowRange(0,maxFeats).clone();
	}


}

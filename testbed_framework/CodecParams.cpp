#include "CodecParams.h"


BRISK_pModel* BRISK_pModel::get_instance(){

	if (instance_ptr == null) {
		instance_ptr = new BRISK_pModel();
	}
	return instance_ptr;

}

BRISK_pModel::BRISK_pModel(){
	loadFiles();
}

double BRISK_pModel::getP0(int id){
	return P0[ idxs[id]-1];
};

double BRISK_pModel::getP0c0(int id1, int id2){
	return P0c0[ idxs[id1]-1 ][ idxs[id2]-1 ];
};

double BRISK_pModel::getP0c1(int id1, int id2){
	return P0c1[ idxs[id1]-1 ][ idxs[id2]-1 ];
};


void BRISK_pModel::loadFiles(){

	cout << "LOADING THE FILES!" << endl;
	// load the probability model
	ifstream file;

	file.open("brisk/P0.bin", ios::in | ios::binary);

	file.read((char*)P0,sizeof(double)*1776);
	file.close();

	file.open("brisk/P0c0.bin", ios::in | ios::binary);
	for(int i=0; i<1776; i++){
		for(int j=0; j<1776; j++){
			file.read((char*)&P0c0[j][i],sizeof(double));
		}
	}
	file.close();

	file.open("brisk/P0c1.bin", ios::in | ios::binary);
	for(int i=0; i<1776; i++){
		for(int j=0; j<1776; j++){
			file.read((char*)&P0c1[j][i],sizeof(double));
		}
	}
	file.close();

	if      ( BRISK_LENGTH_BITS == 512){
		file.open("brisk/ranking_original_optimized512.bin", ios::in | ios::binary);
	}
	else if ( BRISK_LENGTH_BITS == 256 ){
		file.open("brisk/ranking_original_optimized256.bin", ios::in | ios::binary);
	}
	else{
		cout << "Wrong Brisk Length!!!!" << endl;
	}

	file.read((char*)idxs, sizeof(int)*BRISK_LENGTH_BITS);
	file.close();


	cout << "FILE LOADED!" << endl;
}


BRISK_pModel* BRISK_pModel::instance_ptr = null;

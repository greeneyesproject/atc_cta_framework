int getdir (string dir, vector<string> &files);


int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error opening " << dir << endl;
        return -1;
    }

    int fcount = 0;
    while ((dirp = readdir(dp)) != NULL) {
    	if( strcmp((dirp->d_name),".")!=0 && strcmp((dirp->d_name),"..")!=0 )
    		files.push_back(string(dirp->d_name));
    	fcount++;
    }
    closedir(dp);
    return 0;
}

#include "preprocessface.h"

PreprocessFace::PreprocessFace(){}
PreprocessFace::PreprocessFace(const PreprocessFace& other){}
PreprocessFace::~PreprocessFace(){}
PreprocessFace& PreprocessFace::operator=(const PreprocessFace& other){}
bool PreprocessFace::operator==(const PreprocessFace& other){}

void PreprocessFace::getPreprocessedFace(Mat &srcImg, CascadeClassifier &faceCascade)
{ 
    cout << "In Detection and PrepImage" << endl;
}

#include "facedetector.h"

FaceDetector::FaceDetector(){}
FaceDetector::FaceDetector(const FaceDetector& other){}
FaceDetector::~FaceDetector(){}
FaceDetector& FaceDetector::operator=(const FaceDetector& other){}
bool FaceDetector::operator==(const FaceDetector& other){}

void FaceDetector::detectObjectsCustom(const Mat &img, CascadeClassifier &cascade)
{
  
}

void FaceDetector::detectLargestObject(const Mat &img, CascadeClassifier &cascade)
{
  
}

void FaceDetector::detectManyObjects(const Mat &img, CascadeClassifier &cascade, 
				     vector<Rect> &objects)
{
    
}
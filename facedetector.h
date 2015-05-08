
#ifndef FACEDETECTOR_H
#define FACEDETECTOR_H

#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include "opencv2/opencv.hpp"


using namespace cv;
using namespace std;


class FaceDetector {
  public:
    FaceDetector();
    FaceDetector(const FaceDetector& other);
    ~FaceDetector();
    FaceDetector& operator=(const FaceDetector& other);
    bool operator==(const FaceDetector& other);

    void detectObjectsCustom(const Mat &img, CascadeClassifier &cascade);
    void detectLargestObject(const Mat &img, CascadeClassifier &cascade);
    void detectManyObjects(const Mat &img, CascadeClassifier &cascade, vector<Rect> &objects);
};

#endif // FACEDETECTOR_H


#ifndef PREPROCESSFACE_H
#define PREPROCESSFACE_H

#pragma once

#include <stdio.h>
#include <iostream>
#include <vector>
#include "facedetector.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

class PreprocessFace {
  
  public:
    PreprocessFace();
    PreprocessFace(const PreprocessFace& other);
    ~PreprocessFace();
    PreprocessFace& operator=(const PreprocessFace& other);
    bool operator==(const PreprocessFace& other);
    
    void getPreprocessedFace(Mat &srcImg, CascadeClassifier &faceCascade);

};

#endif // PREPROCESSFACE_H


#ifndef FACERECOGNIZE_H
#define FACERECOGNIZE_H

#include "preprocessface.h"

class FaceRecognize {
  public:
    FaceRecognize();
    FaceRecognize(const FaceRecognize& other);
    ~FaceRecognize();
    FaceRecognize& operator=(const FaceRecognize& other);
    bool operator==(const FaceRecognize& other);
    
    void recognizeFromCam(VideoCapture &videoCapture);
    
    PreprocessFace PreFace;
        
};

#endif // FACERECOGNIZE_H

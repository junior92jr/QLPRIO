
#ifndef VIDEOSTREAMING_H
#define VIDEOSTREAMING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <opencv2/opencv.hpp>

#include "facerecognize.h"

using namespace cv;
using namespace std;

class VideoStreaming
{
  public:
    VideoStreaming();
    VideoStreaming(const VideoStreaming& other);
    ~VideoStreaming();
    VideoStreaming& operator=(const VideoStreaming& other);
    bool operator==(const VideoStreaming& other);
    
    void readVideo(int type, char* file);
    void readFromFile(char* filename);
    void readFromCamera();
    
    FaceRecognize facerec;
    
};

#endif // VIDEOSTREAMING_H

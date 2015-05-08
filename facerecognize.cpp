#include "facerecognize.h"

const char *faceCascadeFilename = "haarcascade_frontalface_alt.xml";

FaceRecognize::FaceRecognize(){}
FaceRecognize::FaceRecognize(const FaceRecognize& other){}
FaceRecognize::~FaceRecognize(){}
FaceRecognize& FaceRecognize::operator=(const FaceRecognize& other){}
bool FaceRecognize::operator==(const FaceRecognize& other){}

void FaceRecognize::recognizeFromCam(VideoCapture &videoCapture){
  
  CascadeClassifier faceCascade;
  faceCascade.load(faceCascadeFilename);
  
  Mat img;  //lo que VideoCapture retorna.
  
  PreFace.getPreprocessedFace(img, faceCascade);
  
  cout << "Exito... !" << endl;
  
}

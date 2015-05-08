#include "videostreaming.h"

VideoStreaming::VideoStreaming() {}

VideoStreaming::VideoStreaming(const VideoStreaming& other) {}

VideoStreaming::~VideoStreaming() {}

VideoStreaming& VideoStreaming::operator=(const VideoStreaming& other) {}

bool VideoStreaming::operator==(const VideoStreaming& other) {}

void VideoStreaming::readVideo(int type, char* file) {
  
  switch (type) {
    case 1: readFromFile(file);
      break;
    
    case 2: readFromCamera();
      break;
    
    default:
      break;

  }
}

void VideoStreaming::readFromFile(char* file){
  VideoCapture cap(file);
  
  if (!cap.isOpened()) {
    cout << "Error de Archivo: video no encontrado" << endl;
    return;
  }
  
  namedWindow("Seguridad", CV_WINDOW_AUTOSIZE);
  int i = 0;
  while (true) {
    Mat frameColor;
    bool sucess = cap.read(frameColor);
    
    
    if (!sucess) {
      cout << "Error de lectura: no se puede leer el frame" << endl;
      break;
      
    }
    
    /*
     APLICAR ALGORITMOS DE RECONOCIMIENTO
     
     */
    
    facerec.recognizeFromCam(cap);
    
    /*-----------------------------------*/
    
    imshow("Seguridad", frameColor);
    
    if (waitKey(30) == 27) {
      break;
      
    }
    
  }
  
}
void VideoStreaming::readFromCamera(){
  
}

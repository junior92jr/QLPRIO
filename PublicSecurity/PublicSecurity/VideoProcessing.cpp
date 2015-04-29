#include "VideoProcessing.h"
#include "Coordinates.h"



void readVideo(int type, char* file)
{
	switch (type)
	{
		/*
		* @Read from file off-line
		*/
	case 1: readFromFile(file);
		break;

		/*
		* @Read from camera on-line
		*/
	case 2: readFromCamera(file);
		break;
	default:
		break;
	}
}


void readFromFile(char* file)
{
	cv::VideoCapture cap(file);

	if (!cap.isOpened())
	{
		std::cout << "Error de Archivo: video no encontrado" << std::endl;
		return;
	}

	cv::namedWindow("Seguridad", CV_WINDOW_AUTOSIZE);
	int i = 0;
	while (true)
	{
		cv::Mat frameColor;

		bool sucess = cap.read(frameColor);
		if (!sucess)
		{
			std::cout << "Error de lectura: no se puede leer el frame" << std::endl;
			break;
		}


		cv::Mat frameGray = processCVImageColor(frameColor);


		std::vector<Coordinates> resultsPRDavid = DW_PlateDet(frameGray);
		/*
		std::vector<Coordinates> resultsFDJunior =	JR_FaceRecog(frameGris);
		std::vector<Coordinates> resultsFDJose	 =	PP_FaceRecog(frameGris);
		std::vector<Coordinates> resultsBAKelly  =	KL_BehaviourAnaly(frameGris);
		std::vector<Coordinates> resultsBANepta  =	NP_BehaviourAnaly(frameGris);
		std::vector<Coordinates> resultsBATony   =	TN_BehaviourAnaly(frameColor);
		*/


		joinResults(frameColor, resultsPRDavid);


		cv::imshow("Seguridad", frameColor);

		if (cv::waitKey(30) == 27)
		{
			break;
		}
	}
}

void readFromCamera(char* file)
{

}
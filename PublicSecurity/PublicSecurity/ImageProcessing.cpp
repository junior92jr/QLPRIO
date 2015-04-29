#include "ImageProcessing.h"

cv::Mat processCVImageColor(cv::Mat imageColor)
{

	/**********************************************************************
	* Colocar aquí las funciones de preprocesamiento en común
	*  @Conversión  escala de grises, filtros, etc
	**********************************************************************/
	cv::Mat imageGray = CVImageColor2Gray(imageColor);
	
	
	/*********************************************************************/
	return imageGray;

}

cv::Mat CVImageColor2Gray(cv::Mat imageColor)
{
	cv::Mat imageGray;
	cv::cvtColor(imageColor, imageGray, CV_BGR2GRAY);
	return imageGray;
}
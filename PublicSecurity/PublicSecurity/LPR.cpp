#include "LPR.h"

std::vector<Coordinates>DW_PlateDet(cv::Mat frameGray)
{

	std::vector < Coordinates > resultLPD;
	
	resultLPD.push_back(Coordinates(500, 300, 70, 30, "Placa 1"));
	resultLPD.push_back(Coordinates(800, 100, 70, 30, "Placa 2"));

	return resultLPD;
}
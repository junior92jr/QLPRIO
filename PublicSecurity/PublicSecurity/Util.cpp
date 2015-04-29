#include "Util.h"


void joinResults(cv::Mat &frameColor, std::vector<Coordinates>resultsPRDavid)
{
	int sPR = resultsPRDavid.size();
	for (int i = 0; i < sPR; i++)
	{
		cv::Rect rect(resultsPRDavid[i].x, resultsPRDavid[i].y, resultsPRDavid[i].width, resultsPRDavid[i].height);
		cv::rectangle(frameColor, rect, cv::Scalar(255, 0, 255), 2, 8, 0);

		cv::Point textPoint(resultsPRDavid[i].x, resultsPRDavid[i].y);
		int fontFace = CV_FONT_HERSHEY_SIMPLEX;
		double fontScale = 0.5;
		int thickness = 2;
		cv::putText(frameColor, resultsPRDavid[i].title, textPoint, fontFace, fontScale,
			cv::Scalar(255, 0, 255), thickness, 8);
	}
}
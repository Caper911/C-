#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;

void main()
{
	//载入原始图片
	Mat srcImage = imread("1.jpg");
  
	imshow("显示初始图片", srcImage);
	Mat edge, grayImage;

	cvtColor(srcImage,grayImage,CV_BGR2GRAY);

	blur(grayImage, edge, Size(15, 15));

	Canny(edge, edge, 3, 9, 3);

	imshow("效果图", edge);

	waitKey(0);

}

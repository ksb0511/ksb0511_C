#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>

#include<cstdio>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("Lenna.png", IMREAD_COLOR);
	if (img.empty()) {
		printf("�̹����� ã�� �� ����");
		return 1;
	}

	imshow("Display", img);
	waitKey(0);
	return 0;
}
#include <opencv2/opencv.hpp>
#include "hello.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace cv;

void hello()
{
    printf("hello world\n");
}

int main()
{
    cout << "Hello World" << endl;

    hello();

    hehe();

    Mat img = imread("lena.jpg");
    if (img.empty())
    {
        cout << "can not read file" << endl;
        exit(1);
    }

    Mat dst = Mat::zeros(img.rows, img.cols, CV_8UC1);
    cvtColor(img, dst, COLOR_BGR2GRAY);

    imshow("gray", dst);
    waitKey(0);

    // cin.get();
    return 0;
}
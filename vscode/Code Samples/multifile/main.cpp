// main.cpp

#include <iostream>
#include <opencv2/opencv.hpp>
#include "multifile.hpp"
using namespace std;
using namespace cv;

int main()
{
    MultiFile *m = new MultiFile;
    m->showstr();
    VideoCapture testCamera;
    testCamera.open(0);
    int n = 100;
    while(n){
        Mat src;
        testCamera >> src;
        imshow("test", src);
        waitKey(30);
        n--;
    }
    delete m;
    return 0;
}
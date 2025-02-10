#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

int main() {
    std::cout << "Hello, OpenCV!" << std::endl;
    cv::Mat hello;
    hello = cv::imread("logo.png");
   
    cv::imshow("Logo loadded", hello);
    cv::waitKey(0);
    
    return 0;
}

#include "LogUtils.h"
#include "opencv2/opencv.hpp"

double getCurrentTime() {
    return (static_cast<double>(cv::getTickCount())) / cv::getTickFrequency() * 1000;//单位毫秒
}

double printTime(char *tag, double start, double end) {
    double time = end - start;
    printf("%s = %fms\n", tag, time);
    return time;
}
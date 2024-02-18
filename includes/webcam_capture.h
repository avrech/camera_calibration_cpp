//
// Created by ubuntu on 2/16/24.
//

#ifndef CAMERA_CALIBRATION_CPP_WEBCAM_CAPTURE_H
#define CAMERA_CALIBRATION_CPP_WEBCAM_CAPTURE_H

#include <opencv4/opencv2/opencv.hpp>


class WebcamCapture {
public:
    WebcamCapture();
    ~WebcamCapture();

    cv::Mat getFrame();

private:
    cv::VideoCapture cap;
};

#endif //CAMERA_CALIBRATION_CPP_WEBCAM_CAPTURE_H

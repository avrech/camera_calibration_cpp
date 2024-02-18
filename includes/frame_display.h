//
// Created by ubuntu on 2/16/24.
//

#ifndef CAMERA_CALIBRATION_CPP_FRAME_DISPLAY_H
#define CAMERA_CALIBRATION_CPP_FRAME_DISPLAY_H

#include <opencv4/opencv2/opencv.hpp>


class FrameDisplay {
public:
    FrameDisplay(const std::string& windowName);
    ~FrameDisplay();

    void showFrame(const cv::Mat& frame);

private:
    std::string windowName;
};

#endif //CAMERA_CALIBRATION_CPP_FRAME_DISPLAY_H

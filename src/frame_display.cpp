//
// Created by ubuntu on 2/16/24.
//

#include "../includes/frame_display.h"

FrameDisplay::FrameDisplay(const std::string& windowName) : windowName(windowName) {
    cv::namedWindow(windowName, cv::WINDOW_NORMAL);
}

FrameDisplay::~FrameDisplay() {
    cv::destroyWindow(windowName);
}

void FrameDisplay::showFrame(const cv::Mat& frame) {
    cv::imshow(windowName, frame);
}
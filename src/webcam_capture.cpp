//
// Created by ubuntu on 2/16/24.
//

#include "../includes/webcam_capture.h"


WebcamCapture::WebcamCapture() {
    cap.open(0);

    if (!cap.isOpened()) {
        std::cerr << "Error: Unable to open the webcam." << std::endl;
    }
}

WebcamCapture::~WebcamCapture() {
    cap.release();
}

cv::Mat WebcamCapture::getFrame() {
    cv::Mat frame;
    cap >> frame;
    return frame;
}

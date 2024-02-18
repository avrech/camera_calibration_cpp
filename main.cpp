//
// Created by ubuntu on 2/16/24.
//

#include "includes/frame_display.h"
#include "includes/webcam_capture.h"

int main() {
    WebcamCapture webcam;
    FrameDisplay frameDisplay("Webcam");

    while (true) {
        cv::Mat frame = webcam.getFrame();

        if (frame.empty()) {
            std::cerr << "Error: Unable to capture frame." << std::endl;
            break;
        }

        frameDisplay.showFrame(frame);

        // Break the loop if the 'ESC' key is pressed
        if (cv::waitKey(1) == 27) {
            break;
        }
    }

    return 0;
}
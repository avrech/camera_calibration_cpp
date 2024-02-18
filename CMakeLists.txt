cmake_minimum_required(VERSION 3.15)
project(camera_calibration_cpp)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED COMPONENTS core calib3d imgproc highgui)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(
        camera_calibration_cpp main.cpp
        src/webcam_capture.cpp
        src/frame_display.cpp
)
#target_include_directories(calibrate_camera PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(camera_calibration_cpp ${OpenCV_LIBS})

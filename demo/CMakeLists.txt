cmake_minimum_required(VERSION 3.2)

project(HIKROBOT_Camera_demos)

message(=============================================================)
message("-- Ready to compile demos")
message(=============================================================)

link_directories(
    ${BUILD_DIR}/src
)

add_executable(Trigger_Image Trigger_Image.cpp)

target_link_libraries(Trigger_Image MvCameraControl)
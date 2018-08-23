#ifndef Kinect_H_
#define Kinect_H_

#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <libfreenect.h>
#include <libfreenect_sync.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#define FREENECTOPENCV_RGB_WIDTH 640
#define FREENECTOPENCV_RGB_HEIGHT 480

#define FILE_NAME "kinect.png"
#define FREQUENCY 300

using namespace cv;
using namespace std;

namespace kinectserver {
  class Kinect{
    public:
      Kinect();
      virtual ~Kinect() {};

      freenect_raw_tilt_state* getTilt();
      void setTilt(int angle);
      void startVideo();
    
    private:
      freenect_raw_tilt_state *state = 0;
  };
}

#endif
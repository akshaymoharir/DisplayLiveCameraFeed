

#include <iostream>
#include "../../opencv2/Versions/A/headers/opencv.hpp"

int main(int argc, char** argv)
{
    // Create a videocapture object
    cv::videocapture camera(0);
    
    if(!camera.isOpen())
    {
        std::cout << "Camera is not opened. Error occurred" << std::endl;
        return -1;
    }
    cv::Mat frame;
    bool escape_pressed = false;
    while(!escape_pressed)
    {
    
        camera >> frame;
        char k = cv::WaitKey(1)
        if k == 27
        {
            escape_pressed = true;
        }
    }
    
    camera.release();
    
    cv::destroyAllWindows();
    
    return 0;
}


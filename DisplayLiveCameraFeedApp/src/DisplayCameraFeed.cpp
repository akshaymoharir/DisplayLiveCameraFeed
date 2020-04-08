

#include <iostream>
#include "opencv2/opencv.hpp"

int main(int argc, char** argv)
{
    // Create a videocapture object
    cv::VideoCapture camera(0);
    
    if(!camera.isOpened())
    {
        std::cout << "Camera is not opened. Error occurred" << std::endl;
        return -1;
    }
    
    // Get frame height and width
    unsigned int frameWidth    = camera.get(CV_CAP_PROP_FRAME_WIDTH);
    unsigned int frameHeight   = camera.get(CV_CAP_PROP_FRAME_HEIGHT);
    
    // VideoWriter object
    cv::VideoWriter myVideoWriter("testVide.avi", CV_FOURCC('M','J','P','G'),10, cv::Size(frameWidth,frameHeight));
    
    cv::Mat frame;
    bool escape_pressed     = false;
    unsigned int frameCount  = 0;
    
    // Capture and display frame until user requests exit
    while((!escape_pressed)||(frameCount<=1000))
    {
        // Capture the frame
        camera >> frame;
        
        // Increase frame count
        frameCount++;
        
        // If frame is empty, return with error
        if(frame.empty())
        {
            std::cout << "\nFrame is empty." << std::endl;
            break;
        }
        
        // Display frame
        cv::imshow("Frame", frame);
        
        // Write frame into video
        myVideoWriter.write(frame);
        
        // Check if escape is pressed
        char k = cv::waitKey(1);
        if (k == 27)
        {
            escape_pressed = true;
            std::cout << "Escape pressed. Exit requested by user." << std::endl;
        }
    }
    
    // Release VideoCapture object
    camera.release();
    
    // Release VideoWriter object
    myVideoWriter.release();
    
    // Distroy GUI windows
    cv::destroyAllWindows();
    
    return 0;
}


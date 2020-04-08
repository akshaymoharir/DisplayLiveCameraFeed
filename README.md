# DisplayLiveCameraFeed
OpenCV project to display live feed from camera on macbook

Objective is to display camera feed from camera on macbook using OpenCV library, CMake and C++.

# It is not possible to access camera feed on mac into docker container as per following forum/discussions. 


[https://stackoverflow.com/questions/45843284/cv2-videocapture-not-working-in-docker-container-on-a-mac-host](https://stackoverflow.com/questions/45843284/cv2-videocapture-not-working-in-docker-container-on-a-mac-host)

[https://docs.docker.com/docker-for-mac/faqs/#what-is-the-benefit-of-hyperkit](https://docs.docker.com/docker-for-mac/faqs/#what-is-the-benefit-of-hyperkit)

[https://apple.stackexchange.com/questions/265281/using-webcam-connected-to-macbook-inside-a-docker-container](https://apple.stackexchange.com/questions/265281/using-webcam-connected-to-macbook-inside-a-docker-container)

## Since docker uses hyperkit, it is not possible to access camera feed into docker container.


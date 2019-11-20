# OpenCV-3.4.3
Here, opencv and opencv_contrib are of version 3.4.3

## Required:
Linux

## Install Dependencies:
Open a terminal in the "opencv" directory
- sudo apt-get update
- sudo apt-get upgrade
- sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
- sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev
- sudo apt-get install libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev

## Build and Install OpenCV:
- mkdir build
- cd build
- cmake -D WITH_TBB=ON -D INSTALL_C_EXAMPLES=ON -D WITH_EIGEN=OFF -D BUILD_EXAMPLES=ON -D WITH_QT=OFF D WITH_OPENGL=ON -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib/modules ..
- make -j$(nproc)
- sudo make install
- sudo ldconfig

## Check the version of OpenCV:
- pkg-config --modversion opencv

## Testing:
Open a terminal in the "TestME" directory
- mkdir build
- cd build
- cmake ..
- make
- ./lena

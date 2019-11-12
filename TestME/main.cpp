#include <iostream>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;
 
int main() {
  
  Mat image;
  image = imread("../lena.png", CV_LOAD_IMAGE_COLOR);
  
  if(! image.data ) {
      cout <<  "Could not open or find the image" << endl ;
      return -1;
    }
  
  namedWindow("Display window", WINDOW_AUTOSIZE);
  imshow("Display window", image);
  
  waitKey(0);
  return 0;
}

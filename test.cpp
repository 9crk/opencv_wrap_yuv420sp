// The short example shows how to use new-style image classes declared in cxcore.hpp.
// There is also a very similar matrix class (CvMatrix) - a wrapper for CvMat
#include "cv.h"
#include "highgui.h"

int main( int argc, char** argv )
{
    CvImage img(argc > 1 ? argv[1] : "lena.jpg", 0, CV_LOAD_IMAGE_COLOR),
        img_yuv, y, noise;

    if( !img.data() ) // check if the image has been loaded properly
        return -1;
    return 0;
    // all the images will be released automatically
}





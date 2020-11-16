// The short example shows how to use new-style image classes declared in cxcore.hpp.
// There is also a very similar matrix class (CvMatrix) - a wrapper for CvMat
#include "cv.h"
//#include "highgui.h"
#include "sys/time.h"
#include <stdio.h>
void printTime(){
    struct  timeval    tv;
    gettimeofday(&tv,NULL);
    printf("%ld ms\n",tv.tv_sec*1000 + tv.tv_usec/1000);
}
int main( int argc, char* argv[] )
{
    IplImage* img = cvCreateImage(cvSize(1920,1080),8,3);
    char tmp[1920*1080*3/2];
    FILE* fp = fopen(argv[1],"rb");
    fread(tmp,1,1920*1080*3/2,fp);
    fclose(fp);
    memcpy(img->imageData,tmp,1920*1080*3/2);
    //IplImage* img = cvLoadImage(argv[1]);if(img == NULL)printf("img is null. you might not have file operation rights\n");
    /*IplImage* img = cvCreateImage(cvSize(1000,500),8,3);
    for(int i=0;i<img->height;i++){
	//for(int j=0;j<1000;j++){
            if(i%10 == 0)memset(&(img->imageData[i*img->width*3]),0xFF,img->width*3);
        //}
    }*/
    IplImage* dst = cvCreateImage(cvSize(250,200),8,3);//cvCloneImage(img);
    //return 0;
    //CvPoint2D32f srcQuad[4] = {163,262,504,663,1895,452,1635,748};
    CvPoint2D32f srcQuad[4] = {163,270,498,673,1896,452,1638,750};
    CvPoint2D32f dstQuad[4] = {0,0,0,dst->height,dst->width,0,dst->width,dst->height};
    //CvPoint2D32f srcQuad[4] = {5,296,256,425,643,3,643,445};
    //CvPoint2D32f dstQuad[4] = {100,20,100,400,643,3,643,445};
    CvMat *warp_matrix=cvCreateMat(3,3,CV_32FC1);
   
    cvGetPerspectiveTransform(srcQuad,dstQuad,warp_matrix);
    printTime();
    cvWarpPerspective(img,dst,warp_matrix);
    printTime();
    //IplImage* dst2 = cvCloneImage(dst);
    //IplImage* dst3 = cvCreateImage(cvSize(500,400),8,1);
    //cvSplit(dst,dst3,0,0,0); 
    //cvCvtColor(dst,dst2,CV_YCrCb2BGR);
    //cvSaveImage("result.bmp",dst2);
    //cvSaveImage("result2.bmp",dst);
    printf("w=%d h=%d\n",img->width,img->height);
    return 0;
}





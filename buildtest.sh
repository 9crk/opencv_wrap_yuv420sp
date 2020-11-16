arm-hisiv300-linux-gcc test.cpp -o tttttttt -I ./cv/include -I ./cxcore/include/ -I ./otherlibs/highgui/
arm-himix100-linux-gcc -c cv/src/cvimgwarp.cpp  -I ./cv/include -I ./cxcore/include/


./configure --with-v4l=no --target=arm-himix100-linux  --host=arm-himix100-linux --prefix=/home/zhouhua/HISI/opencv/install --enable-static

arm-himix100-linux-gcc test.cpp -o testtttt -Wl,-Bstatic -lhighgui -lcv -lcxcore -lcvaux -lstdc++ -Wl,-Bdynamic -lgcc_s  -I ../install/include/ -I ../install/include/opencv/ -L ../install/lib/ -lpthread



./configure --with-v4l=no --target=arm-himix100-linux  --host=arm-himix100-linux --prefix=/home/zhouhua/HISI/opencv/install --enable-static --enable-debug=no 

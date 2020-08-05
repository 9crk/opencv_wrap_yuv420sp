./configure --with-v4l=no --target=arm-himix100-linux  --host=arm-himix100-linux --prefix=/home/zhouhua/HISI/opencv/install --enable-static --enable-debug=no CFLAGS="-mcpu=cortex-a7 -mfloat-abi=softfp -mfpu=neon-vfpv4 -fno-aggressive-loop-optimizations" CXXFLAGS="-mcpu=cortex-a7 -mfloat-abi=softfp -mfpu=neon-vfpv4 -fno-aggressive-loop-optimizations"
make
make install
sync
cp ../install/lib/libcv.a ../../ESD_hi3518ev300/libs/opencv/
cp ../install/lib/libcxcore.a ../../ESD_hi3518ev300/libs/opencv/

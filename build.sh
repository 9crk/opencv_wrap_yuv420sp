arm-himix100-linux-gcc test.cpp -o testtttt -Wl,-Bstatic -lhighgui -lcv -lcxcore -lcvaux -lstdc++ -Wl,-Bdynamic -lgcc_s  -I install/include/ -I install/include/opencv/ -L install/lib/ -lpthread -lm -mcpu=cortex-a7 -mfloat-abi=softfp -mfpu=neon-vfpv4 -fno-aggressive-loop-optimizations
#arm-himix100-linux-gcc test.cpp -o testtttt -Wl,-Bstatic -lcv -lcxcore -lstdc++ -Wl,-Bdynamic -lgcc_s  -I install/include/ -I install/include/opencv/ -L install/lib/ -lpthread -lm -mcpu=cortex-a7 -mfloat-abi=softfp -mfpu=neon-vfpv4 -fno-aggressive-loop-optimizations
sudo chmod 777 result.bmp 

# F446-INAV
STM32F446 for INAV

stm32f446ret6+bmp280+mpu6000/6500+at7456e
5v/9v output
5 serials and 1 iic

# How to Build
1)Put stm32f4.cmake into ./inav/cmake and replace the old version of stm32f4.cmake
2)Put /F446 into ./inav/src/main/target/ 
3)Goto ./inav//build and open in terminal
4)make clean && cmake ..  
5)make F446

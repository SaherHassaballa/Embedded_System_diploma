#include <stdio.h>
#include "Headers\Motor.h" //relative address for Motor.h file so cpp.exe can find it in preprocessor toolchain stage

/* i have probelm i cant organize files in folde the main fun doesnt find the 
header files and configure dont find main if is in Source folder so cant build it solve this probelm pro*/

int main () {
    unsigned int speed = 0 ;
    MotorMoveForward(speed);

}
#include <stdio.h>
#include "C:\Users\saher\Desktop\Github Projects\Embedded_System_diploma\c\06_lecture6_CProgramming\Headers\Motor.h"

void MotorMoveForward (unsigned int speed){
    speed = +5 ;
    printf("speed increase by 5");
};
void MotorMoveBackward (unsigned int speed){
    speed =-5 ;
    printf("speed decrease by 5");
};
void MotorMoveLeft (unsigned int MotorNum){
    MotorNum = 1 ; // the left wheel only run
};
void MotorMoveRight (unsigned int MotorNum){
    MotorNum = 2 ; // the right wheel only run
};
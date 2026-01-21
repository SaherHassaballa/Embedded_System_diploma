#include "C:\Users\saher\Desktop\Github Projects\Embedded_System_diploma\CProgramming\14_lecture14_CProgramming\6_APP_MCAL_PtrToFunAsParaInStrunct\Headers\MCAL.h"

void MoveForward(void (* PtrFun) (void)){
    printf("move forward done , baby \n");
    PtrFun();
}
void MoveBackward(Motor_t  PtrFun){
    printf("move backward done , baby \n");
    PtrFun.PtrFun();
}
void MoveLeft(void (*PtrFun) (void)){ 
    printf("move left done , baby \n");
    PtrFun();
}
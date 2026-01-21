
#include "..\Headers\MCAL.h"


int main(){
    Motor_t Motor1 = { // struct has pointer of function
        1,
        BackwardNotificationCallback
    };
    Motor_t Motor2 = { // struct has pointer of function
        1,
        LeftNotificationCallback
    };
    

    MoveForward(ForwardNotificationCallback);
    printf("==================================\n");
    MoveBackward(Motor1); // pass struct has pointer of function
    printf("==================================\n");
    MoveLeft((Motor2.PtrFun)); // pass pointer to function can here pass name of function due to name of fun is a pointer to his function
}

void ForwardNotificationCallback(void){
    printf("Check MoveForward done ,robot \n");
}

void BackwardNotificationCallback(void){
    printf("Check MoveBcakward done ,robot \n");
}

void LeftNotificationCallback(void){
    printf("Check Left done ,robot \n");
}
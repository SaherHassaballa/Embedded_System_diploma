
#include "..\Headers\Application.h"


int main(){
    MoveForward(ForwardNotificationCallback);
}

void ForwardNotificationCallback(void){
    printf("Check MoveForward done ,robot \n");
}

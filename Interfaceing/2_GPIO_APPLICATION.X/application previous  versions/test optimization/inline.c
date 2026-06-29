#include <stdio.h>

int return_2 (){
    return 2 ;
}

int return_3 (){
    return 3;
}

int main(){
    int sum = return_2() + return_3();
    printf("the value of sum is %d\n", sum);
    return 0;
}
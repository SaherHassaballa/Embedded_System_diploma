#include <stdio.h>
    unsigned int Num1 = 0x44332211;

int main(){


    unsigned char *Ptr1 = &(Num1) ;
    unsigned short *Ptr2 = &(Num1) ;
    unsigned int *Ptr3 = &(Num1) ;

    printf("the value1 : 0X%x \n" , *Ptr1);
    printf("the value2 : 0X%x \n" , *Ptr2);
    printf("the value3 : 0X%x \n" , *Ptr3);

}

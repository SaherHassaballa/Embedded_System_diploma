#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int *Ptr = NULL ;
    unsigned int SizeNeed = (5*(sizeof(unsigned int)));
    Ptr = (unsigned int *)malloc(SizeNeed);
    *Ptr = 5;
    *(Ptr +1) = 10 ;
    *(Ptr +2) = 10 ;
    *(Ptr +3) = 10 ;
    *(Ptr +4) = 11 ;
    printf("the address of ptr in heap : 0x%p \n" , Ptr );
    for(int i=0 ; i<5 ; i++){
        printf("the value %i is : %i \n" , i , *(Ptr + i));
    }

}
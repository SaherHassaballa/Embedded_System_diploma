#include <stdio.h>
#include <stdlib.h>
//if you dont know the address that ptr will assigned to now assigned it to NULL
    unsigned int *Ptr1 = NULL;

int main(){
    unsigned char *Ptr2 =  NULL ;
    unsigned int Len = 0;
    
    // will crash try access zero address
    //printf("the address : 0X%x" , *Ptr1);
    printf("enter Len : \n");
    scanf("%i", Len);
    Ptr1 = malloc(Len * 4);
    printf("the size of pointer : %i \n" , sizeof(Ptr1));
    printf("the address of pointer : 0X%x \n" , Ptr1);
    free(Ptr1);
    //ptr1 become danglinng pointer so assign it to null
    Ptr1 = NULL;

    if(Ptr1){
        *Ptr1 = 99 ;
    }else{
        printf("is assigned to NULL");
    }
}

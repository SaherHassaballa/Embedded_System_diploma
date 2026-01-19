#include <stdio.h>

// take constant to protect it from any change can accour this is matter if i need to prevent any one form change the value of pointer refer to so load the ptr in pointer point to const
//this is a rule when you use pointer in fun if wanna save value from change
unsigned int Is_Symatric(const unsigned int *ptr1 , const unsigned int *ptr2 , unsigned int lenght);

unsigned int *ptr1 = NULL ; 
unsigned int *ptr2 = NULL ;
const unsigned int * const ptr3 = NULL; // pointer to const so cant change value of this place and const pointer mean cant refere to another address

int main(){

    unsigned int arr[4] = {0x0004 , 0x0004 , 0x0004 ,0x0004};
    ptr1 = &arr[0] ;
    printf("the address of arr[0] : 0X%x \n" , ptr1);
    printf("the value at arr[0] : 0X%x \n" , *ptr1);
    
    // ptr1 += 1 ;
    // printf("the address of arr[0] : 0X%x \n" , ptr1);
    // printf("the value at arr[0] : 0X%x \n" , *ptr1);

    ptr2 = &arr[3];
    printf("the address of arr[0] : 0X%x \n" , ptr2);
    printf("the value at arr[0] : 0X%x \n" , *ptr2);

    Is_Symatric(ptr1 , ptr2 , 4);

    *ptr2 = *ptr1++ ; // *ptr++ = *(p++)
    printf("the address of ptr1  *ptr2 = *ptr1++ : 0X%x \n" , ptr1);
    printf("the value at ptr1  *ptr2 = *ptr1++ : 0X%x \n" , *ptr1);
    printf("the address of ptr2  *ptr2 = *ptr1++ : 0X%x \n" , ptr2);
    printf("the value at ptr2  *ptr2 = *ptr1++ : 0X%x \n" , *ptr2);

    *ptr2 = (*ptr1)++ ; // here you do the ++ on the value not address
    printf("the address of ptr1  *ptr2 = (*ptr1)++ : 0X%x \n" , ptr1);
    printf("the value at ptr1  *ptr2 = (*ptr1)++ : 0X%x \n" , *ptr1);
    printf("the address of ptr2  *ptr2 = (*ptr1)++ : 0X%x \n" , ptr2);
    printf("the value at ptr2  *ptr2 = (*ptr1)++ : 0X%x \n" , *ptr2);

    *ptr2 = *(++ptr1) ;
    printf("the address of ptr1  *ptr2 = *(++ptr1) : 0X%x \n" , ptr1);
    printf("the value at ptr1  *ptr2 = *(++ptr1) : 0X%x \n" , *ptr1);
    printf("the address of ptr2  *ptr2 = *(++ptr1) : 0X%x \n" , ptr2);
    printf("the value at ptr2  *ptr2 = *(++ptr1) : 0X%x \n" , *ptr2);

    *ptr2 = ++(*ptr1) ;
    printf("the address of ptr1  *ptr2 = ++(*ptr1) : 0X%x \n" , ptr1);
    printf("the value at ptr1 *ptr2 = ++(*ptr1) : 0X%x \n" , *ptr1);
    printf("the address of ptr2  *ptr2 = ++(*ptr1) : 0X%x \n" , ptr2);
    printf("the value at ptr2  *ptr2 = ++(*ptr1) : 0X%x \n" , *ptr2);



    return 0 ;
}

unsigned int Is_Symatric(const unsigned int *ptr1 , const unsigned int *ptr2 , unsigned int lenght){
    unsigned int StateError = 0 ;
    for(int i = 0 ; i < lenght ; i++){
        if(ptr1 < ptr2){
            if(*ptr1 != *ptr2){
                printf("there no symetric between element num %i , %i \n"  , i ,(lenght -(i) ));
                break;
            }
        }else{
            printf("All right");
            break;
        }
        ptr1 +=1 ;
        ptr2 -=1 ;
    }
    return StateError ;
};

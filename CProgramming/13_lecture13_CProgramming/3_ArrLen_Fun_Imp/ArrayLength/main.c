#include <stdio.h>

void ArrayLength(unsigned int Arr[]);


int main(){
    unsigned int Arr1[] = {1,2,3,4,5,6};
    ArrayLength(Arr1);
    printf("size of array = %i\n" , (*(&Arr1+1) - (Arr1)));
}


// why not work in function fuck
void ArrayLength (unsigned int Arr[]){
    printf("size of array = %i\n" , (*(&Arr+1) - (Arr)));
}
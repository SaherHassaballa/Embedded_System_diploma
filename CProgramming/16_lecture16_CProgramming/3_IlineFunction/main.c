#include <stdio.h>

#define summing_macro(num1 ,num2) (num1 +num2)


unsigned int summing1(unsigned int num1 , unsigned int num2);

// will cause ld error due to using inline so no define exist fuck this error
unsigned int inline summing2(unsigned int num1 , unsigned int num2);


unsigned int inline summing3(unsigned int num1 , unsigned int num2) __attribute__((always_inline));


int main(){ 
    printf("the summing1 is : %i\n" , summing1(2,3));
    printf("the summing1 is : %i\n" , summing_macro(2,3));
    printf("the summing1 is : %0.2f\n" , summing_macro(2.5,100));

    printf("the summing1 is : %i\n" , summing2(2,3));

}


unsigned int summing1(unsigned int num1 , unsigned int num2){
    return (num1 + num2);
}


unsigned int inline summing2(unsigned int num1 , unsigned int num2){
    return (num1 + num2);
}


unsigned int inline summing3(unsigned int num1 , unsigned int num2) {
    return (num1 + num2);
}
#include <stdio.h>

// integer promotion
int main(void){
    char NumOne = 30 ;
    char NumTwo = 40 ;
    char Result = 0 ;
    signed char NegativeNum = -8 ; 

    Result = NumOne * NumTwo ; // here overflow occuor
    printf("the result : %i \n" , Result);    

    Result = (NumOne * NumTwo)/10 ; // here promotion acour then divide 1200 by 10 become 120 can save in char var
    printf("the result : %i \n" , Result);    
    // you know NumOne , NumTwo are char but the result of multipling both it 1200 bigger than the max 255 so promotion accour during the operation to calcu the result
    // promotion mean upgrad the value in calcu to can calu then store the result but data corabtion will occour due to save big bit num in small on

    // Binary shift (this is logical shift)
    printf("Shift left 1 by 1 display in hexa , dicemal : %x , %d \n" , (1 << 1) ,(1 << 1));
    printf("Shift right 1 by 1 display in hexa , dicemal : %x , %d \n" , (1 >> 1) ,(1 >> 1)); // res will be zero (0001) >> 1 = (0000)

    //arithmatic shift for just right and work fo signed var you will see the effect with negative var
    printf("Shift Right with save signed bit : %d  \n" ,(NegativeNum >> 1)); // -8 shift right by 1 = -4

    // using binary shift in manpulation
    // clear 
    printf("clear bit 0 in number 1 (0x000 0b0001)  : %d \n", (1 & ~(1 << 0)));
    // set 
    printf("set bit 1 in number 1 (0x000 0b0001)  : %d \n", (1 |(1 << 1)));
    // toggle 
    printf("toggle bit 1 in number 1 (0x000 0b0001)  : %d \n", (1 ^ (1 << 1)));

}
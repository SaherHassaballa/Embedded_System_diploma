#include "main.h"
#include "lcd.h"

int main (){
    unsigned int Res = SUMMING(8,9) * PI;
    uint8_t  x = 1 , y =10 ;
    //unsigned int ResFloat = summing("3.44",9.1) * PI;
    //unsigned int ResFloat = SUMMING("3.44",9.1) * PI;
    SWAP(&x,&y);
    printf("X : %i , Y : %i \n" , x ,y);
    printf("Res : %i \n" , Res);


    uint8_t value = 10 ;
    printf("the value : %i \n" ,value);
    SET_BIT(value , 1);
    printf("the value after set bit1 : %i \n" ,value);
    CLEAR_BIT(value , 1);
    printf("the value after clear bit1 : %i \n" ,value);
    TOGGLE_BIT(value , 1);
    // negligt part in you code using conditional compilation
    #if 0 
    printf("the value after toggle bit1 : %i \n" ,value);
    printf("======================= \n");
    Led_Mode_selection();
    #endif

    //use predefine macro (all macros will be replacement after preprocessing process)
    #line 1 "app.c"
    printf("the file name : %s , the line num : %i , the date : %s" , __FILE__ , __LINE__ , __DATE__ );

    printf("Hi " ",I am Saher"); // is true 

} 

int summing(int num1 , int num2){
    int Res = num1 +num2 ;
    return Res ;
};
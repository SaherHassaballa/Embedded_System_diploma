#include <stdio.h>

int main(void){
    signed int Num1 = 10 ;
    signed int Num2 = 5 ;
    signed int Res = 0 ;
    signed int count = 0 ;

    // Assignment operation
    Res += Num1 ;
    Res = Num1 == Num2 ? 1 : 0 ;
    printf("the result of Num1 == Num2 : %i \n" , Res);
    
    // operator precedence 

    Res = 7+3*2 ;  // it will be (7 + (3*2)) = 7 + 6 = 13
    printf("the res of (7 + 2*3) : %i \n" , Res);

    //operators associativity
    Res = 100 / 10 * 10 ; //the same priority so from table for / , * start from left to right 
    printf("thr res of (100/10*10): %i \n" , Res);

    // Dicision making using if(can condition operator) , switch , goto 
    if(Num1 == Num2){
        Res = 0;
    }else if (Num1<Num2)
    {
        Res = 1;
    }else{
        Res = -1;
    }
    
    switch (Num1 == Num2)
    {
    case 1:
        printf("switch case 1 is correct \n");
        break;
    
    default:
        printf("switch case 1 isn't correct \n");
        break;
    }


    saher:
        printf("saher \n");
        count +=1;
        if(count == 3){
            goto remain;
        }
    goto saher ;

    remain:
        printf("finished \n");
}
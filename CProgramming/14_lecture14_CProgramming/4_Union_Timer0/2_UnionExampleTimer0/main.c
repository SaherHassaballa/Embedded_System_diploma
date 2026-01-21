#include <stdio.h>

typedef unsigned char uint8_t ;

typedef union 
{
    struct
    {
        uint8_t T0PS : 3;
        uint8_t PSA : 1;
        uint8_t T0SE : 1;
        uint8_t T0CS : 1;
        uint8_t T08BIT : 1;
        uint8_t TMR0ON : 1;
    };

    struct
    {
        uint8_t T0PS0 : 1;
        uint8_t T0PS1 : 1;
        uint8_t T0PS2 : 1;
        uint8_t : 5;
    };
    uint8_t T0CON_Reg ;
} T0CON_t;




int main(){
    T0CON_t T0CON_Obj ;
    T0CON_Obj.T0CON_Reg = 0x07;
    printf("the value of regester is : %d\n" ,T0CON_Obj.T0CON_Reg  );
}
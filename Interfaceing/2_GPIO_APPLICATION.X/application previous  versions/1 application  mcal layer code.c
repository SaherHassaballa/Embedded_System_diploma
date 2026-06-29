/* 
 * File:   application.c
 * Author: saher
 *
 * Created on 27 June 2026, 00:56
 */


 /*this not true due to if change mc family architure will change in application so should written in mcal layer*/
#include "application.h"

#define HWREG8(_x)        (*((volatile uint8 *) (_x)))

#define AHMED_LATC        (HWREG8(0xF8B))
#define AHMED_TRISC       (HWREG8(0xF94))

int main()
{
    AHMED_TRISC = 0x00;

    while(1)
    {
        AHMED_LATC = 0x0F;
        __delay_ms(1000);

        AHMED_LATC = 0xF0;
        __delay_ms(1000);
    }

    return (EXIT_SUCCESS);
}

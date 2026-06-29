/* 
 * File:   application.c
 * Author: saher
 *
 * Created on 27 June 2026, 00:56
 */


 /*this not true due to if change mc family architure will change in application so should written in mcal layer*/
#include "application.h"

#define _XTAL_FREQ 8000000UL
/* The issue was caused by using __delay_ms() without defining _XTAL_FREQ, which the compiler needs to calculate the required delay cycles. */

/* The build error occurred because _XTAL_FREQ was not defined before using __delay_ms(); after defining it with the oscillator frequency, the compiler successfully calculated the delay and the project built correctly. */

/*_XTAL_FREQ is a user-defined macro that specifies the oscillator frequency (clock speed) of the microcontroller. 
 * It is not automatically defined by the compiler libraries because the compiler does not know which clock source or frequency is being used in the hardware design. 
 * Macros like __delay_ms() and __delay_us() depend on _XTAL_FREQ to calculate the correct number of instruction cycles required for timing delays.`*/
#define HWREG8(_x)  (*((volatile unsigned char *)(_x)))


#define AHMED_LATC (HWREG8(0xF8B))
#define AHMED_TRISC (HWREG8(0xF94))


int main()
{
    AHMED_TRISC = 0x00 ;
    while(1){
        AHMED_LATC = 0x00;
        __delay_ms(500);
        AHMED_LATC |= (_LATC_LATC0_MASK | _LATC_LATC7_MASK);
        __delay_ms(500);
        AHMED_LATC |= (_LATC_LATC1_MASK | _LATC_LATC6_MASK);
        __delay_ms(500);
        AHMED_LATC |= (_LATC_LATC2_MASK | _LATC_LATC5_MASK);
        __delay_ms(500);
        AHMED_LATC |= (_LATC_LATC3_MASK | _LATC_LATC4_MASK);
        __delay_ms(500);

    }
    return (EXIT_SUCCESS);
}

/*get hex file click cursser on build Botton chosse build Main Project then hex file will generated*/
/*C:\Users\saher\Desktop\Github Projects\Embedded_System_diploma\Interfaceing\2_GPIO_APPLICATION.X\dist\default\production\2_GPIO_APPLICATION.X.production.hex*/
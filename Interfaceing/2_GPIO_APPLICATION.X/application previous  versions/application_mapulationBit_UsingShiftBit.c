/* 
 * File:   application.c
 * Author: saher
 *
 * Created on 27 June 2026, 00:56
 */

#include "application.h"

#define _XTAL_FREQ 8000000UL

#define HWREG8(_x)  (*((volatile unsigned char *)(_x)))


#define AHMED_LATC (HWREG8(0xF8B))
#define AHMED_TRISC (HWREG8(0xF94))


#define SET_BIT(REG_ADDR, BIT_POSN)     (REG_ADDR |= (1 << BIT_POSN))
#define CLEAR_BIT(REG_ADDR, BIT_POSN)   (REG_ADDR &= ~(1 << BIT_POSN))
#define Toggle_BIT(REG_ADDR, BIT_POSN)  (REG_ADDR ^= (1 << BIT_POSN))

int main() {
    AHMED_TRISC = 0x00;
    AHMED_LATC = 0x55;

    while(1) {
        __delay_ms(2000);

    //AHMED_LATC |= (1 << _LATC_LATC1_POSN);
    SET_BIT(AHMED_LATC, _LATC_LATC1_POSN);
    AHMED_LATC |= (1 << _LATC_LATC3_POSN);

    __delay_ms(2000);

    //AHMED_LATC &= ~(1 << _LATC_LATC1_POSN);
    CLEAR_BIT(AHMED_LATC, _LATC_LATC1_POSN);
    AHMED_LATC &= ~(1 << _LATC_LATC3_POSN);

    __delay_ms(2000);

    //AHMED_LATC ^= (1 << _LATC_LATC1_POSN);
    Toggle_BIT(AHMED_LATC, _LATC_LATC1_POSN);
    AHMED_LATC ^= (1 << _LATC_LATC3_POSN);
    }

    return (EXIT_SUCCESS);
}

/*char to use 1 byte access location*/
/*use * to say its ptr casting by volatile unsigned char and all *() to dereference pointer to get the value*/
/*0xF80 is the physical address of the PORTA register*/
#define PORTA_REG
#define PORTB_REG
#define PORTC_REG
#define PORTD_REG
#define PORTE_REG

PORTA_REG = 0X55;

if(PORTA_REG=0x23){

}

(*((volatile unsigned char *)0xF80))
(*((unsigned char volatile *)0xF81))
(*((unsigned char volatile *)0xF82))
(*((unsigned char volatile *)0xF83))
(*((unsigned char volatile *)0xF84))

/*can use anther way*/
unsigned char volatile *PORTC_REG = ((unsigned char volatile *)0xF82);

/*using voltile why*/

/*dont need*/
#include <stdio.h>

unsigned char var1 = 0;

int main(void)
{
    do
    {
        var1++;
    }
    while (var1 < 10);

    return 0;
}

/*need volatile*/

#include <stdio.h>

#define PORTC_REG ((volatile unsigned char*)0xF82)

volatile unsigned char var2 = 0;

void motor_turn_left(void)
{
    // Motor control code
}

int main(void)
{
    while (1)
    {
        do
        {
            var2 = *PORTC_REG;   // اقرأ قيمة الـ port كل مرة
            motor_turn_left();
        }
        while (var2 < 10);
    }

    return 0;
}
/*

ليه هنا volatile؟

السطر ده:

*PORTC_REG

بيقرأ من Hardware Register.

الـ register ده ممكن يتغير بسبب:

Sensor
Button
External signal
Interrupt

من غير volatile الـ compiler ممكن يقول:

أنا قريت القيمة مرة وخلاص.

ويعمل optimization غلط.

*/
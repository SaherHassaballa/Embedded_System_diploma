/*char to use 1 byte access location*/
/*use * to say its ptr casting by volatile unsigned char and all *() to dereference pointer to get the value*/
/*0xF80 is the physical address of the PORTA register*/
#define PORTA_REG *((volatile unsigned char *)0xF80) 

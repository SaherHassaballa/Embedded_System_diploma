#include "lcd.h"
#include "lcd.h"
#include "lcd.h"

static void Led_Mode_4(){ // use static because i want it not be used just can use from another fun
    printf("the mode is : 4 \n");
}
static void Led_Mode_8(){
    printf("the mode is : 8 \n");
}

// contional compilation preprocessor directive
void Led_Mode_selection(){
    #if LCD_MODE == 4
    #ifdef CHAR_MODE_DEBUG
    printf("CHAR_MODE_DEBUG defined");
    #endif
        Led_Mode_4();
    #elif LCD_MODE == 8
        Led_Mode_8();
    #endif

    int *ptr = NULL;
}



/// conditional compilation 

#if (condition)

#elif (condition)
#ifdef char

#endif
#endif
// using file garde
// use can use pragma once in the first of file will work and file gard just this line #pragma once but it complier dependency
#ifndef _LCD_H_
#define _LCD_H_
/*Include Section*/
#include <stdio.h>
/*Macros Definition Section*/

#ifndef LCD_MODE
#define LCD_MODE 4
#endif

#define CHAR_MODE_DEBUG


/*User Declaration Types*/

/*Function Declarations Section*/
static void Led_Mode_4();
static void Led_Mode_8();
void Led_Mode_selection();

// it will not work due to NULL is define by defualt bt ((void*)0)
#ifndef NULL
#define NULL ((void *) NULL)
#endif

// using #error to write error during compile processing in preprocessing exact
#ifdef TEST
#error "error test define"
#else
#error "error test define"
#endif

// use #pragma GCC poison to prevent using some thing expection error if it used
#pragma GCC posion printf
//for warining during preporocessing
#pragma GCC warning "take care bro"
//for error not just warining during preporocessing
#pragma GCC error "take care bro"

#endif



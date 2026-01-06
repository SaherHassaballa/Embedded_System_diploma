/*
 -------------------------------------------------------------------
 * @file   :  main.c
 * @version : 1.0.0
 * @author :  Saher ayman hassaballa
 * @brief  :  Expain types of errors in C language
 -------------------------------------------------------------------
*/

/******************* Include section Start ******************* */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/******************* Include section End  ******************* */

/******************* Defintion section Start ******************* */

/******************* Defintion section End ******************* */

/******************* Global Variable section Start ******************* */
unsigned char Buttons = 0; // to store button status
unsigned int LedNum = 0;     // number of led
unsigned char ButtonState = 0; // Button state
/******************* Global Variable section End ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Sub-Programe Decleration section Start
 * *********************/
/******************* Sub-Programe Decleration section End ********************/

int main() {
    //Add a space before %c , The space tells scanf to skip whitespace (including '\n').
    printf("Hello Enter Led Number from 0 to 7\n");
    scanf(" %i", &LedNum);

    printf("Enter Button State ON(1) / OFF(0)\n");
    scanf(" %c", &ButtonState);

    /*
    switch (LedNum)
    {
    case '0' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<0);
        }else{
            // turn off led 0
            Buttons &= ~(1<<0); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '1' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<1);
        }else{
            // turn off led 0
            Buttons &= ~(1<<1); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '2' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<2);
        }else{
            // turn off led 0
            Buttons &= ~(1<<2); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '3' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<3);
        }else{
            // turn off led 0
            Buttons &= ~(1<<3); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '4' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<4);
        }else{
            // turn off led 0
            Buttons &= ~(1<<4); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '5' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<5);
        }else{
            // turn off led 0
            Buttons &= ~(1<<5); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '6' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<6);
        }else{
            // turn off led 0
            Buttons &= ~(1<<6); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    case '7' :
        if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<7);
        }else{
            // turn off led 0
            Buttons &= ~(1<<7); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        break;
    default:
        break;
    } 
        */

    
    /* better logic and more readanle to use loop instade of sequnce of lines */

    for(int i = 0 ; i < 7 ; i++){ 
        if(i == LedNum){
         if(ButtonState == '1'){
            // turn on led 0
            Buttons |= (1<<i);
        }else{
            // turn off led 0   
            Buttons &= ~(1<<i); // for using ~ enter shift + the button above for enter (ù key)
            }
        printf("the state now : %x" , Buttons);
        }
    }

  return 0;
}

/******************* Sub-Programe section Start ******************* */

/******************* Sub-Programe section End ******************* */

/*
 ----------------------------------------------------------------------
    User            Data                Brief
 ----------------------------------------------------------------------
  saher ayman    05/1/2026          Task-55 add new print Hello World
  ali mohamed    10/1/2026          Task-56 add new print motor work
*/
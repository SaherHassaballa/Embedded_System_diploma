/*
 * File: main.c
 * Description: 
 * Author: 
 * Date: 
 */

/* ========== HEADERS ========== */
#include <stdio.h>
#include <windows.h>

/* ========== CONSTANTS ========== */

/* ========== MACROS ========== */

/* ========== TYPEDEFS & STRUCTURES ========== */

/* ========== FUNCTION PROTOTYPES ========== */
unsigned int  Factorial (unsigned int number);

void PrintSaher();

void PrintHassaballa();

/* ========== MAIN FUNCTION ========== */
int main(void)
{
    unsigned int arr1[][3] = {{11,22,33},
                            {55 ,66,77} ,
                            {88 ,99 ,100}};
    unsigned int *ptr = &arr1[0][0] ;

    printf("the ptr data :%i \n" , *(ptr +2));
    printf("the *(arr1[0]+1) : %i\n" , *(arr1[2]+1));


    char *Names[2] = {"saher ayman hassaballa", // save addres of many string arr of pointers
                    "mohamed ahmed hassan"};

    printf("names ptr : %s \n" , Names[1]);

    unsigned int result =  Factorial(5);

    printf("the result of factorial %i is : %i \n" , 5 , result);

    PrintSaher();

    return 0;
}

/* ========== FUNCTION DEFINITIONS ========== */
//recurrsion function
unsigned int  Factorial (unsigned int number){
    unsigned int result = 0;
    if(number == 0){
        result = 1 ;
    }else{
        result = number * Factorial(number -1);
    }
    return result;
}

void PrintSaher(){
    printf("Saher\n");
    Sleep(200);
    PrintHassaballa();
}

void PrintHassaballa(){
    printf("Hassaballa\n");
    Sleep(200);
    PrintSaher();
}
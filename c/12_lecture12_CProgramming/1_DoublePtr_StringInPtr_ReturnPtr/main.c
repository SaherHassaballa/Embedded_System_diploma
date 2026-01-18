/*
 * File: main.c
 * Author: Your Name
 * Date: 19-Jan-2026
 * Description: Brief description of what this program does
 */

/* ====== SECTION 1: INCLUDE HEADERS ====== */
#include <stdio.h>      /* Standard Input/Output */
#include <stdlib.h>     /* Standard Library */
#include <string.h>     /* String Functions */
/* #include <other_headers.h> */


/* ====== SECTION 2: MACRO DEFINITIONS ====== */

/* #define OTHER_MACRO value */


/* ====== SECTION 3: TYPE DEFINITIONS ====== */


/* ====== SECTION 4: GLOBAL VARIABLES ====== */

/* Other global variables */


/* ====== SECTION 5: FUNCTION DECLARATIONS (Prototypes) ====== */

unsigned int *Return_Address1();
unsigned int *Return_Address2(unsigned int arr[] , unsigned int length);
unsigned int *Return_Address3();

/* ====== SECTION 6: MAIN FUNCTION ====== */
int main(void)
{
    
    char *message1 = "saher ayamn";
    printf("my name is : %s \n" , message1);
    //*message1 = 'w' ; // cant do this crash will occour due to try access string storage in ROM 
    char **ptrToMessage1 = &message1 ; // double pointer refer to address of anther pointer
    printf("my name is : %s \n" , *ptrToMessage1); // **ptrToMessage1 is false due to print string need address of starting char not the contant
    printf("my name is : %c \n" , **ptrToMessage1);
    printf("my name is : 0X%x \n" , *&ptrToMessage1); // will print the address of message1 (&message1)
    printf("my name is : 0X%p \n" , *&ptrToMessage1); // will print the address of message1 (&message1) using %p


    unsigned int *ptrMax1 = Return_Address1();

    printf("max number in array1 is  : %i \n" , *ptrMax1);

    unsigned int arr[] = {1,12,23,4,5};
    unsigned int *ptrMax2 = Return_Address2(arr , 5);

    printf("max number in array2 is  : %i \n" , *ptrMax2);


    // unsigned int ptr1 = 

    return 0;
}


/* ====== SECTION 7: FUNCTION DEFINITIONS ====== */

/**
 * Function: Return_Address
 * Parameters: None
 * Return: pointer
 * Description: return pointer (return array address of biggest element) for biggest num in static array
 */

unsigned int *Return_Address1(){
    static unsigned int arr[4] = {1,10,3,4}; // should be static are to can access it after fun terminate
    unsigned int max = 0 ;
    for(int i = 1 ; i < (sizeof(arr) / sizeof(arr[0])) ; i++){
        if(arr[i] > arr[max]){
            max = i ;
        }
    }

    return &arr[max];   
}

/**
 * Function: Return_Address
 * Parameters: unsigned int arr[] , unsigned int length
 * Return: pointer
 * Description: return pointer for biggest num of resived array
 */

unsigned int *Return_Address2(unsigned int arr[] , unsigned int length){
    unsigned int max = 0 ;
    for(int i = 1 ; i < length ; i++){
        if(arr[i] > arr[max]){
            max = i ;
        }
    }

    return &arr[max];   
}


/**
 * Function: Return_Address
 * Parameters: None
 * Return: pointer
 * Description: return arr address return address of first element
 */

unsigned int *Return_Address3(){
    static unsigned int arr[4] = {1,10,3,4}; // should be static are to can access it after fun terminate

    return arr;   
}


/**
 * Function: functionOne
 * Parameters: None
 * Return: void
 * Description: Description of what this function does
 */
void functionOne(void)
{
    printf("Function One executed\n");
}


/**
 * Function: functionTwo
 * Parameters: int a, int b
 * Return: int - sum of a and b
 * Description: Adds two numbers and returns the result
 */
int functionTwo(int a, int b)
{
    return a + b;
}
// this form for any .c file

// first thing in your code write the documentation section for your code
// created by yourself or by idetor take computer information and insert it

/*
 -------------------------------------------------------------------
 * @file   :  main.c
 * @version : 1.0.0
 * @author :  Saher ayman hassaballa
 * @brief  :  contains basic for learning c
 -------------------------------------------------------------------
*/
// in big projects we generation the code and if the code is outside the certain
// section if you close and reopen you will exist it deleted

/******************* Include section Start ******************* */
// this is preprocessor direction
#include <stdio.h>
#include <stdlib.h>
// this section use for lib include
/******************* Include section End  ******************* */

/******************* Defintion section Start ******************* */
#define USER_PI 3.14         // difine number
unsigned int NumberOne = 33; // or any global variable , it can be use in
                             // seprated section its just for organization
/******************* Defintion section End ******************* */

/******************* Global Variable section Start ******************* */
unsigned int NumberTwo = 44;
/******************* Global Variable section End ******************* */

/******************* Global Decleration section Start ******************* */
unsigned int saher;
/******************* Global Decleration section Start ******************* */

/******************* Sub-Programe Decleration section Start
 * ********************/
void Print_Saher(void);
void Print_hassaballa(void);
/******************* Sub-Programe Decleration section End ********************/

int main() {
  printf("Hello world! \n");
  printf("Motor Work");
  return 0;
}

/******************* Sub-Programe section Start ******************* */
void Print_Saher(void) { printf("Saher"); }
void Print_hassaballa(void) { printf("hassaballa"); }
/******************* Sub-Programe section End ******************* */

// in the end you can write history lock used for know how create or modifed in
// code
/*
 ----------------------------------------------------------------------
    User            Data                Brief
 ----------------------------------------------------------------------
  saher ayman    05/1/2026          Task-55 add new print Hello World
  ali mohamed    10/1/2026          Task-56 add new print motor work
*/
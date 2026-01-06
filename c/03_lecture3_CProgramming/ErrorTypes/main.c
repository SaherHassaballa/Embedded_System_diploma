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
extern int Global_Var; // extern variable declaration
/******************* Global Variable section End ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Sub-Programe Decleration section Start
 * *********************/
/******************* Sub-Programe Decleration section End ********************/

int main() {
  int Num1 = 10;
  // this is syntx error missing semicolon
  printf("Hello World\n")
      // this is runtime error division by zero
      Num1 = Num1 / 0;

  // this is linker error undeclared extern variable
  printf("extern variable value = %d\n", Global_Var);
  // logical error related to logic mistake
  // here i should be incremented not decremented so it will cause  and logic
  // error because this will make an infinite loop not finit loop
  for (int i = 0; i <= 5; i--) {
    printf("i = %d\n", i);
  }

  // semantic error example related to type conversion and in data handling
  // difine assigne and so on
  char c = 'A';
  int ascii_value =
      c + 1.5; // adding float to char, should be an integer operation
  printf("ASCII value: %d\n", ascii_value);

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
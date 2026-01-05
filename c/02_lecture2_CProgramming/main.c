// this for practice with data types and specifer asci limits.h

/*
 -------------------------------------------------------------------
 * @file   :  main.c
 * @version : 1.0.0
 * @author :  Saher ayman hassaballa
 * @brief  :  contains basic for learning c
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
signed int NumberOne = 100;
signed int NumberTwo = -200;
extern int
    x; // allowed just declerartion that there is an int x outside this file
/******************* Global Variable section End ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Sub-Programe Decleration section Start
 * *********************/
int signed_Summation(unsigned int Num1, unsigned int Num2);
/******************* Sub-Programe Decleration section End ********************/

int main() {
  // when you choose your data type take care about range of num you needed and the using of memory must be optial
  float FNum1 = 10.6;
  double DNum1 = 20.299919991;
  int Result = signed_Summation(NumberOne, NumberTwo);
  int Result_Size = sizeof(Result);
  double DResult = FNum1 + DNum1;
  int DResult_Size = sizeof(DResult);
  printf("the result : %i \n", Result);
  printf("the size of Result : %i \n", Result_Size);
  printf("the floating Result is : %f\n", DResult);
  printf("the size of DResult : %i \n", DResult_Size);
  // its extern so no compile error in linking it search about it in the anthor files if not exist will exception linking error
  //printf("x = %i",x); 

  return 0;
}

/******************* Sub-Programe section Start ******************* */
int signed_Summation(unsigned int Num1, unsigned int Num2) {
  unsigned int Result = 0;
  Result = Num1 + Num2;
  return Result;
};
/******************* Sub-Programe section End ******************* */

/*
 ----------------------------------------------------------------------
    User            Data                Brief
 ----------------------------------------------------------------------
  saher ayman    05/1/2026          Task-55 add new print Hello World
  ali mohamed    10/1/2026          Task-56 add new print motor work
*/
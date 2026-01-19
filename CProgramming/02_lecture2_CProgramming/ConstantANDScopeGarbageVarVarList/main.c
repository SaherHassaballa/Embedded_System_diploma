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

signed int Speed1, Speed2, Speed3;
signed int Speed4, Speed5,
    Speed6 = 100; // just the last one assigned to 100 all will be zero

signed int NumberOne, NumberTwo = -200;
signed int Speed; // this is a global var will initialize to zero

const float PI = 3.14; // cant directily change can using pointer
float *ptr;

/******************* Global Variable section End ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Global Decleration section Start ******************* */

/******************* Sub-Programe Decleration section Start *
 * *********************/

/******************* Sub-Programe Decleration section End ********************/

int main() {

  float FNum1; // is local var assigned togarbage value

  ptr = &PI;
  *ptr += 1; // inderictly change the value of PI
  printf("result ptr : %f \n ", *ptr);
  printf("result PI : %f \n ", PI);

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
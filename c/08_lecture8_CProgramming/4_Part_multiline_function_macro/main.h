/*Include Section*/
#include <stdio.h>
#include <stdint.h>

/*Macros Definition Section*/
#define PI 3.14

#\
define \
TEST \
77

#define SUMMING(NUM1 ,NUM2) (NUM1 + NUM2) // here i dont use {} due to i will use this expreion as part of anthor exprestion not a single block

// #define SWAP(X, Y){\
// *(X)= *(X)^*(Y); \ //this wronge
// *(Y)= *(X)^*(Y);  \/*this also the same wronge*/
// *(X)= *(X)^*(Y);  }

#define SWAP(X, Y){\
*(X)= *(X)^*(Y); \
*(Y)= *(X)^*(Y);  \
*(X)= *(X)^*(Y);  }

#define SET_BIT(VAR , BIT) (VAR = VAR | (1<< BIT))
#define CLEAR_BIT(VAR , BIT) (VAR = VAR & ~(1<< BIT))
#define TOGGLE_BIT(VAR , BIT) (VAR = VAR ^ (1<< BIT))
#define SQUARE1(NUM) ((NUM) * (NUM))
#define SQUARE2(NUM) (NUM * NUM)
#define SQUARE3(NUM) (NUM * (NUM))

/*User Declaration Types*/

/*Function Declarations Section*/

int summing(int num1 , int num2);
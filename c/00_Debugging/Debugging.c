#include <stdio.h>

void Add_One(unsigned int *Pnumber1, unsigned *Pnumber2) {
  *Pnumber1 += 1;
  *Pnumber2 += 1;
}

unsigned int Get_Summing(unsigned int Number1, unsigned int Number2) {
  unsigned int Result = 0;
  Add_One(&Number1, &Number2);
  Result = Number1 + Number2;
  return Result;
}

int main() {
  unsigned int Data1 = 2;
  unsigned int Data2 = 3;
  unsigned Result = 0;

  Result = Get_Summing(Data1, Data2);

  printf("The Result : %d", Result);
  return 0;
}
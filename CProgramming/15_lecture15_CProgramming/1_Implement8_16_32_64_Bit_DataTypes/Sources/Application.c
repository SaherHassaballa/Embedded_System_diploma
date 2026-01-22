#include <stdio.h>
#include "..\\Headers\\Platform_Types.h"

uint32 Var1 ;

int main(){
    printf("Sizeof Var1 , CPU type : %i , %i \n"  ,sizeof(Var1), CPU_TYPE);
}
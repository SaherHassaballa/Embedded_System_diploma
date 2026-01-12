#include <stdio.h>

// Any code file has code + data
// code saved in .text/code 
// any global var not initialized or with zero saved in .bss in RAM
// any global const var saved in .rodata in flash
// any global var initial with value have 2 copy one in .data in both (ROM ,RAM)
// global is static lifetime

int num1 ; // saved in .bss in RAM
const int num2 = 3; // saved in .rodata in flash 
int main(){
    // local is automatic liftime dealocate from memory after out from scope because scope create his stak after end stack of the scope terminate
    int num3 = 2; //local var saved in stack 
    {
        printf("num2 (is global) = %i \n" , num2); // local in this scope
        int num3 = 5;
        printf("num3 inner = %i \n" , num3);
    }
        printf("num3 inner = %i \n" , num3);
        printf("num2 (is global) = %i \n" , num2);
}
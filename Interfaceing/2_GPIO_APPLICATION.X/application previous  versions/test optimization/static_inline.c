#include <stdio.h>

inline int return_2 (){
    return 2 ;
}

/* this problem doesnt appear to me fuck may be solved*/

/*
 the error due to use :
    inline int return_2 (){
    return 2 ;
    }

    compiler replace it so in ld linker can find fun because compiler remove and replace call with the code
 
 solution : use static 


PS C:\Users\saher\Desktop\Github Projects\Embedded_System_diploma\Interfaceing\2_GPIO_APPLICATION.X\application previous  versions\test optimization> gcc -S static_inline.i -o static_inline.s
cc1.exe: fatal error: static_inline.i: No such file or directory
compilation terminated.

*/

int main(){
    int sum = return_2() ;
    printf("the value of sum is %d\n", sum);
    return 0;
}
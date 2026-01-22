#include <stdio.h>
#include "..\\Headers\\Platform_Types.h"


// life become easy with typedef and code more readable

uint32 ReturnFunction1(void);
uint32 ReturnFunction2(void);
uint32 ReturnFunction3(void);
uint32 ReturnFunction4(void);

/*
    uint32 (*(*Ptr(void))[4])(void); why will use tpyedef to make it more readable
*/

uint32 (*(*MyFunction(void))[4])(void);


/*using typedef to make it more readabale*/

typedef uint32 (*FunToPtr) (void) ; 
FunToPtr FTP ;

FunToPtr PtrReturnFunction[4] = {ReturnFunction1 ,ReturnFunction2,
                                        ReturnFunction3 ,ReturnFunction4};
                                    /*see the diffrent complex expression now easy to read*/
/*uint32 (*PtrReturnFunction[4])(void) = {ReturnFunction1 ,ReturnFunction2,
                                        ReturnFunction3 ,ReturnFunction4};*/

int main(){
    printf("the result : %u\n" , PtrReturnFunction[0]());
    printf("the result : %u\n" , PtrReturnFunction[1]());
    printf("the result : %u\n" , PtrReturnFunction[2]());
    printf("the result : %u\n" , PtrReturnFunction[3]());
    printf("================================================\n");
    printf("the result : %u\n" , ((*(MyFunction()))[0])());
    printf("the result : %u\n" , ((*(MyFunction()))[1])());
    printf("the result : %u\n" , ((*(MyFunction()))[2])());
    printf("the result : %u\n" , ((*(MyFunction()))[3])());
}

uint32 ReturnFunction1(void){
    return 11;
}
uint32 ReturnFunction2(void){
    return 22;
}
uint32 ReturnFunction3(void){
    return 33;
}
uint32 ReturnFunction4(void){
    return 44;
}



// uint32 (*(*Ptr(void))[4])(void){
//     uint32 (*(*LocalPtr)[4])(void) =
// }

uint32 (*(*MyFunction(void))[4])(void){
    FunToPtr (*LocalPtr)[4] =&PtrReturnFunction;
    return (LocalPtr);
}


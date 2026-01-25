#include "..\Headers\StackArray.h"

int main(){

    uint32 StackSize = 0;
    State_t CreateState = STACKOK ;
    StackArray_t *stack = NULL ;

    uint32 number1 = 10 ;
    uint32 number2 = 20 ;
    uint32 number3 = 30 ;
    uint32 number4 = 40 ;
    uint32 number5 = 50 ;
    uint32 number6 = 60 ;


    printf("Enter Stack size : ");
    scanf("%i" , &StackSize);

    stack = CreateStack(StackSize , &CreateState);

    push(stack , &number1);
    push(stack , &number2);
    push(stack , &number3);
    push(stack , &number4);
    push(stack , &number5);
    push(stack , &number6);


    PrintStack(stack);
    
    pop(stack);
    top(stack);
    pop(stack);
    top(stack);
    pop(stack);
    top(stack);
    pop(stack);
    top(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);

    PrintStack(stack);

    top(stack);
}
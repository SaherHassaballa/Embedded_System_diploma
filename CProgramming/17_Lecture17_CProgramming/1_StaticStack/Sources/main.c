#include "..\Headers\StackArray.h"

int main(){

    uint32 StackSize = 0;
    State_t CreateState = STACKOK ;
    StackArray_t *stack = NULL ;

    uint16 number1 = 10 ;
    uint16 number2 = 20 ;
    uint16 number3 = 30 ;
    uint16 number4 = 40 ;
    uint16 number5 = 50 ;
    uint16 number6 = 60 ;


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
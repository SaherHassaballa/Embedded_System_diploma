#include "..\Headers\StackArray.h"

/*
 * @brief This function create empty stack
 * @param MaxSize of your stack array
 * @param StatePtr to return state f function
 * @retval Pointer to StackArray_t
 */

StackArray_t *CreateStack(uint32 MaxSize , State_t *StatePtr){
    StackArray_t *MyStack = NULL;
    if (StatePtr)
        {            
        MyStack = (StackArray_t *) malloc(sizeof(StackArray_t));

        if(MyStack){
            MyStack->CounterElement = 0;
            MyStack->StackTop = -1;
            MyStack -> StackMaxSize = MaxSize ;
            MyStack ->StackArray = (void **) calloc(MyStack->StackMaxSize , sizeof(void *)); // return double ptr for array of ptr ptr to data
            if(MyStack ->StackArray){
                printf("stack created sucessfuly\n");
            }else{
                printf("faild create array of ptr\n");
            }
        }
        else{
            printf("stack allocate return Null\n");
            *StatePtr = NULLError;
        }
            
        }
    else{
        printf("pass Null pointer to creat array function on StatePtr\n");
    }
    return MyStack ;
}


/*
 * @brief This function to push element in stack
 * @param stackPtr to push in
 * @param itemPtr to push it
 * @retval Pointer to StackArray_t
 */

State_t push(StackArray_t *stack, void *itemPtr){
    if(!stack || !itemPtr){
        return NULLError;
        printf("pass null to push\n");
    }

    if(stack->StackTop == (sint32)(stack->StackMaxSize - 1)){
        printf("stack full cant push \n");
        return STACKFULL;
    }

    stack->StackTop++;
    stack->StackArray[stack->StackTop] = itemPtr;
    stack->CounterElement++;

    printf("push done \n");

    return STACKOK;
}


State_t pop(StackArray_t *stack){
    State_t state = STACKOK ;

    if (stack)
    {
        if (stack->StackTop != -1)
            {
                printf("the pop value : %i \n" , *(int *)stack->StackArray[(stack -> StackTop)]);
                stack ->StackTop -- ;
                stack ->CounterElement -- ;
            }else{
                printf("stack empty\n");
                state = STACKEMPTY ;
            }
        
    }else{
        printf("pass null ptr in pop\n");
        state = NULLError ;
    }
    
    return state ;
}




State_t top(StackArray_t *stack){
    State_t state = STACKOK ;

    if (stack)
    {
        if (stack->StackTop != -1)
            {
                printf("the tooooop value : %i \n" , *(int *)stack->StackArray[(stack -> StackTop)]);
            }else{
                printf("stack empty\n");
                state = STACKEMPTY ;
            }
        
    }else{
        printf("pass null ptr in pop\n");
        state = NULLError ;
    }
    
    return state ;
}




State_t PrintStack(StackArray_t *stack){
    if(!stack){
        return NULLError;
    }

    printf("stack : [ ");
    for(int i = stack->StackTop; i >= 0; i--){
        printf("%d ", *(int *)stack->StackArray[i]);
    }
    printf("]\n");

    return STACKOK;
}



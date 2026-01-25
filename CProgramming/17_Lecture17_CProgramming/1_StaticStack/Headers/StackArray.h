#include<stdio.h>
#include<stdlib.h>

#include "Platform_Types.h"

typedef enum {
    STACKNOTOK,
    STACKOK,
    NULLError,
    STACKFULL,
    STACKEMPTY
}State_t;

typedef struct
{
    void **StackArray; // pointer ptr to array name (ptr)
    sint32 CounterElement;
    sint32 StackMaxSize;
    sint32 StackTop;
} StackArray_t;



StackArray_t *CreateStack(uint32 MaxSize , State_t *StatePtr);

State_t push(StackArray_t *stack , void *itemPtr);

State_t pop(StackArray_t *stack);

State_t top(StackArray_t *stack);

State_t PrintStack(StackArray_t *stack);

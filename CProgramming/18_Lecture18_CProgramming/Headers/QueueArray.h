#ifndef _QUEUEARRAY_H_
#define _QUEUEARRAY_H_

#include <stdio.h>
#include <stdlib.h>

#include "..\Headers\Platform_Types.h"

typedef struct 
{
    void ** QArray ;
    sint8 ElementCount ;
    sint8 MaxSize ;
    sint8 QFront ;
    sint8 QRear ; 

} Queue_t;

typedef enum{
    QUEUE_OK,
    QUEUE_NOK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_POINTER,

}State_t;


Queue_t * CreateQueue(State_t * QueueState , uint8 MaxSize);
State_t Enqueue(Queue_t * Queue , void *ItemPtr);
State_t Dequeue(Queue_t * Queue);
State_t QueueFront(Queue_t * Queue);
State_t QueueRear(Queue_t * Queue);
State_t PrintQueue (Queue_t * Queue);




#endif
#include "..\Headers\QueueArray.h"


Queue_t * CreateQueue(State_t * QueueState , uint8 MaxSize){
    Queue_t * ReturnQueue = NULL ;
    if(QueueState){
        Queue_t *Queue = (Queue_t *)calloc(1 , sizeof(Queue_t));
        if(Queue){
            *QueueState = QUEUE_NOK ;
            ReturnQueue = Queue;
            Queue -> MaxSize = MaxSize ;
            Queue ->QFront = -1 ;
            Queue ->QRear = -1 ;

            Queue -> QArray = (void **) calloc(MaxSize, sizeof(void *));
        }else{
            printf("Cant create queue\n");
            *QueueState = QUEUE_NOK ;
        }
    }else{
        printf("pass null to Create Queue function \n");
    }
    return ReturnQueue ;
}



State_t Enqueue(Queue_t * Queue , void *ItemPtr){
    State_t State = QUEUE_OK ;
    if(Queue && ItemPtr){
        if(Queue ->ElementCount < Queue ->MaxSize){
            if(Queue ->ElementCount == 0){
                Queue ->QFront ++ ;
            }
            Queue ->ElementCount++ ;
            Queue ->QRear++ ;
            
            ((Queue ->QArray)[(Queue ->QRear)]) = ItemPtr ;
        }else{
            printf("your Queue is full baby\n");
            State = QUEUE_FULL ;
        }
    }else{
        printf("Pass Null Ptr to Enqueue\n");
        State = QUEUE_NULL_POINTER;
    }
        return State ;
}


State_t Dequeue(Queue_t * Queue){
    State_t State = QUEUE_OK ;
    if(Queue){
        if(Queue->QFront != Queue->QRear && Queue->QFront != -1 && Queue->QRear != -1)
        {           
            printf("the data out : %i \n" , *((uint8 *)((Queue ->QArray)[(Queue ->QFront)])));
            Queue->ElementCount -- ;
            Queue->QFront ++ ;
        }else{
            printf("the queue is empty \n");
            State = QUEUE_EMPTY ;
        }

    }else{
        printf("Pass Null ptr to Print Queue \n");
        State = QUEUE_NULL_POINTER ;
    }
    return State ;
}


State_t PrintQueue (Queue_t * Queue){
    State_t State = QUEUE_OK ;
    if(Queue && Queue->QFront != -1){
        printf("the queue :[ ");
        for(int i = Queue->QFront ; i < Queue->QRear ; i++){
            printf("%i " , *((uint8 *)((Queue ->QArray)[i])));
        }
        printf("]\n");
    }else{
        printf("Pass Null ptr to Print Queue \n");
        State = QUEUE_NULL_POINTER ;
    }
    return State ;
}
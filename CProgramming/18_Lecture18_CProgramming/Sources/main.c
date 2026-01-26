#include "stdio.h"

#include "..\Headers\QueueArray.h"

int main(){

    State_t State = QUEUE_OK ;
    uint8 MaxSize = 0 ; 
    uint8 Input = 0 ; 
    uint8 Num1 = 10 ;
    uint8 Num2 = 20 ;
    uint8 Num3 = 30 ;
    uint8 Num4 = 40 ;
    uint8 Num5 = 50 ;
    uint8 Num6 = 60 ;
    uint8 Num7 = 70 ;
    uint8 Num8 = 80 ;


    printf("enter max size queue : ");
    scanf("%hhu" , &MaxSize);

    Queue_t *Queue = NULL ;
    Queue = CreateQueue(&State , MaxSize);
    Enqueue(Queue , &Num1);
    Enqueue(Queue , &Num2);
    Enqueue(Queue , &Num3);
    Enqueue(Queue , &Num4);
    Enqueue(Queue , &Num5);
    Enqueue(Queue , &Num6);
    PrintQueue(Queue);
    Dequeue(Queue);
    PrintQueue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);
    PrintQueue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);
    Dequeue(Queue);

    PrintQueue(Queue);


    



    

    



    // while (1)
    // {
    //         printf("==================================== \n");
    //         printf("enter number : \n");
    //         printf("1- Create Queue  \n");
    //         printf("2- Enqueue \n");
    //         printf("3- Print Queue \n");
    //         printf("4- exit \n");
    //         printf("==================================== \n");
        
    //         int c = 0;
    //         while ((c = getchar()) != '\n' && c != EOF );
            

    //                 /* to read numbers not assci for char '1' or '2'*/
    //         //         scanf("%hhu", &MaxSize);   // uint8

    //         scanf("%c" , &Input);
    //         fflush(stdin);

    //         if (Input == '4')
    //             {
    //                 break;
    //             }

    //         switch (Input)
    //         {
    //             case '1':
    //                 printf("enter max number of Queue : ");
    //                 while ((c = getchar()) != '\n' && c != EOF );
    //                 scanf("%c" ,&MaxSize);
    //                 Queue = CreateQueue(&State , MaxSize);
    //                 break;
    //             case '2':
    //                 printf("enter element :");
    //                 while ((c = getchar()) != '\n' && c != EOF );
    //                 scanf("%c" ,&Input);
    //                 Enqueue(Queue , &Input);
    //                 break;
    //             case '3':
    //                 PrintQueue(Queue);
    //                 break;
    //             default:
    //                 break;
    //         }
            

            
    // }


    return 0;
}
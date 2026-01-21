#ifndef _APPLICATION_H_
#define _APPLICATION_H_


#include "MCAL.h"


void ForwardNotificationCallback(void);
void BackwardNotificationCallback(void);
void LeftNotificationCallback(void);
typedef struct 
{   
    unsigned char MNum;
    void (*PtrFun) (void);
}Motor_t;


#endif
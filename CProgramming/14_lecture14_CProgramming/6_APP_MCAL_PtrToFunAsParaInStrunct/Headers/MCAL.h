#ifndef _MCAL_H_
#define _MCAL_H_

#include <stdio.h>
#include "Application.h"

void MoveForward(void (* PtrFun) (void));
void MoveBackward(Motor_t  PtrFun);
void MoveLeft(void (*PtrFun) (void));






#endif
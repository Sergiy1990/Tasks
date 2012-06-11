/***
*@file task.h
*@brief This file include functions and constants which use for execute and show result
*
*Copyright 2012 by Sergiy Androshchyk
***/
#ifndef _TASK_H_
#define _TASK_H_

const unsigned long MASK=0x00000001;
const unsigned char DISP_NUMB_IN_ASCII=0x30;

unsigned long ChangeNible (unsigned int InNumber); 
char * ShowInBinary(char *Spointer,unsigned long Number);

#endif /*_TASK_H_*/
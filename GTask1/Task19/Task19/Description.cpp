#include<iostream>
#include"task.h"

using namespace std;

/**
*@brief return number with changed neighboring nibls
*@param unsigned long InNumber
*@return unsigned long OutNumber
*/

unsigned long ChangeNible (unsigned int InNumber) 
{
	unsigned long OutNumber=0;
	unsigned char Temp1=0, Temp2=0;

	Temp1=InNumber>>24;
	Temp2=Temp1>>4;
	Temp1=(Temp1<<4)|Temp2;
	OutNumber=Temp1;

	Temp1=InNumber>>16;
	Temp2=Temp1>>4;
	Temp1=(Temp1<<4)|Temp2;
	OutNumber<<=8;
	OutNumber|=Temp1;

	Temp1=InNumber>>8;
	Temp2=Temp1>>4;
	Temp1=(Temp1<<4)|Temp2;
	OutNumber<<=8;
	OutNumber|=Temp1;

	Temp1=InNumber;
	Temp2=Temp1>>4;
	Temp1=(Temp1<<4)|Temp2;
	OutNumber<<=8;
	OutNumber|=Temp1;

	return OutNumber;
}

/**
*@brief show integer number in binary 
*@param char *spointer, unsigned long number
*@return pointer to the string
*@warning size area shall be 33 bytes
*/
char * ShowInBinary(char *Spointer,unsigned long Number)
{
	
	
	Spointer[32]='\0';
	Spointer[31]=(Number>>0 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[30]=(Number>>1 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[29]=(Number>>2 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[28]=(Number>>3 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[27]=(Number>>4 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[26]=(Number>>5 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[25]=(Number>>6 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[24]=(Number>>7 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[23]=(Number>>8 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[22]=(Number>>9 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[21]=(Number>>10 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[20]=(Number>>11 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[19]=(Number>>12 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[18]=(Number>>13 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[17]=(Number>>14 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[16]=(Number>>15 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[15]=(Number>>16 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[14]=(Number>>17 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[13]=(Number>>18 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[12]=(Number>>19 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[11]=(Number>>20 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[10]=(Number>>21 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[9]=(Number>>22 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[8]=(Number>>23 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[7]=(Number>>24 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[6]=(Number>>25 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[5]=(Number>>26 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[4]=(Number>>27 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[3]=(Number>>28 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[2]=(Number>>29 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[1]=(Number>>30 & MASK)|DISP_NUMB_IN_ASCII;
	Spointer[0]=(Number>>31 & MASK)|DISP_NUMB_IN_ASCII;

	return Spointer;
}
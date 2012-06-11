#include<iostream>  //Define iostream
#include"task.h"	//Define task

using namespace std;

/**
*@brief return 1 if argument is power 2
*@param unsigned long number
*@return 1 if argument is power 2 and 0 if argument isn't power 2
*/
unsigned long Pow (unsigned long number)
{
	unsigned long result=0, counter=0;
	
	counter=(number>>0 & MASK)+counter;
	counter=(number>>1 & MASK)+counter;
	counter=(number>>2 & MASK)+counter;
	counter=(number>>3 & MASK)+counter;
	counter=(number>>4 & MASK)+counter;
	counter=(number>>5 & MASK)+counter;
	counter=(number>>6 & MASK)+counter;
	counter=(number>>7 & MASK)+counter;
	counter=(number>>8 & MASK)+counter;
	counter=(number>>9 & MASK)+counter;
	counter=(number>>10 & MASK)+counter;
	counter=(number>>11 & MASK)+counter;
	counter=(number>>12 & MASK)+counter;
	counter=(number>>13 & MASK)+counter;
	counter=(number>>14 & MASK)+counter;
	counter=(number>>15 & MASK)+counter;
	counter=(number>>16 & MASK)+counter;
	counter=(number>>17 & MASK)+counter;
	counter=(number>>18 & MASK)+counter;
	counter=(number>>19 & MASK)+counter;
	counter=(number>>20 & MASK)+counter;
	counter=(number>>21 & MASK)+counter;
	counter=(number>>22 & MASK)+counter;
	counter=(number>>23 & MASK)+counter;
	counter=(number>>24 & MASK)+counter;
	counter=(number>>25 & MASK)+counter;
	counter=(number>>26 & MASK)+counter;
	counter=(number>>27 & MASK)+counter;
	counter=(number>>28 & MASK)+counter;
	counter=(number>>29 & MASK)+counter;
	counter=(number>>30 & MASK)+counter;
	counter=(number>>31 & MASK)+counter;

	result=!(counter&(~MASK));

	return result;
}


/**
*@brief show integer number in binary 
*@param char *spointer, unsigned long number
*@return pointer to the string
*@warning size area shall be 33 bytes
*/
char * ShowInBinary(char *spointer,unsigned long number)
{
	
	
	spointer[32]='\0';
	spointer[31]=(number>>0 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[30]=(number>>1 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[29]=(number>>2 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[28]=(number>>3 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[27]=(number>>4 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[26]=(number>>5 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[25]=(number>>6 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[24]=(number>>7 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[23]=(number>>8 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[22]=(number>>9 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[21]=(number>>10 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[20]=(number>>11 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[19]=(number>>12 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[18]=(number>>13 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[17]=(number>>14 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[16]=(number>>15 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[15]=(number>>16 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[14]=(number>>17 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[13]=(number>>18 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[12]=(number>>19 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[11]=(number>>20 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[10]=(number>>21 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[9]=(number>>22 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[8]=(number>>23 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[7]=(number>>24 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[6]=(number>>25 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[5]=(number>>26 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[4]=(number>>27 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[3]=(number>>28 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[2]=(number>>29 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[1]=(number>>30 & MASK)|DISP_NUMB_IN_ASCII;
	spointer[0]=(number>>31 & MASK)|DISP_NUMB_IN_ASCII;
	
	return spointer;
}

#include<iostream>
#include"task.h"

using namespace std;

int main (void)
{
	unsigned long number=0, result=0;
	char str[33];

	cout<<"Enter a number ";
	cin>>number;
	cout<<"Number in binary="<<ShowInBinary(str,number)<<endl<<endl;

	result=Pow(number);
	cout<<"Result in binary="<<ShowInBinary(str,result)<<endl;

	cin.get();
	cin.get();

	return 0;
}
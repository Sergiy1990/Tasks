#include<iostream>
#include"task.h"

using namespace std;

int main (void)
{
	char Str[33];
	unsigned long Number=0, Result=0, Shift=0;
	cout<<"Enter number ";
	cin>>Number;
	cout<<"Number in binary="<<ShowInBinary(Str,Number)<<endl<<endl;

	cout<<"Enter shift ";
	cin>>Shift;
	cout<<"Shift in binary="<<ShowInBinary(Str,Shift)<<endl<<endl;

	Result=ROL(Number,Shift);
	cout<<"Number in binary after ROL="<<ShowInBinary(Str,Result)<<endl;
	cin.get();
	cin.get();

	return 0;
}
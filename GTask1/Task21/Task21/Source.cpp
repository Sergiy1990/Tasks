#include<iostream>
#include"task.h"

using namespace std;

int main (void)
{
	long Number=0, Result=0;
	char Str[33];

	cout<<"Enter a number ";
	cin>>Number;
	cout<<"Number in binary="<<ShowInBinary(Str,Number)<<endl<<endl;

	Result=Min(Number);
	cout<<"Result in binary="<<ShowInBinary(Str,Result)<<endl;

	cin.get();
	cin.get();

	return 0;
}
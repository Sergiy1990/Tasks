#include<iostream>
#include"task.h"
using namespace std;

int main(void)
{
	char Str[33];
	unsigned long InNumber=0x12345678, Result=0;

	cout<<"Enter Input Number ";
	cin>>InNumber;
	cout<<endl;

	cout<<"Input Number in binary= "<<ShowInBinary(Str,InNumber)<<endl;
	
	Result=ChangeNible(InNumber);

	cout<<"Result in binary= "<<ShowInBinary(Str,Result)<<endl;

	cin.get();
	cin.get();

	return 0;
}
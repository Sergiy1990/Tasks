#include<iostream>
#include"task.h"
using namespace std;

int main (void)
{

	char Str[33];
	unsigned int SizeArea=0, Position=0;
	unsigned long Result=0;
	
	cout<<"Enter SizeArea ";
	cin>>SizeArea;
	cout<<endl;

	cout<<"Enter Position ";
	cin>>Position;
	cout<<endl;

	cout<<"Position and SizeArea in binary"<<endl<<endl;
	cout<<"Position=";
	
	            
	cout<<ShowInBinary(Str,Position)<<endl<<endl;

	cout<<"SizeArea=";

	cout<<ShowInBinary(Str,SizeArea)<<endl<<endl;

	Result=ReturnNumber(Position,SizeArea);
	cout<<"Result in binary=";

	cout<<ShowInBinary(Str,Result)<<endl;

	cin.get();
	cin.get();

	return 0;
}
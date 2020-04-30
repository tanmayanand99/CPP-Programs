//an eg. of reference variables

#include<iostream.h>
#include<conio.h>

void main()
{
	int a=10;
	int & ref_a=a;
	clrscr();
	cout<<"a contains "<<a<<" and ref_a contains "<<ref_a<<endl;
	cout<<"Adress of var a is "<<(unsigned int)&a
	<<" and of ref_a is "<<(unsigned int)&ref_a<<endl;
	ref_a++;
	cout<<"After increment of ref_a"<<endl;
	cout<<"a contains "<<a<<" and ref_a contains "<<ref_a<<endl;
	getch();
}
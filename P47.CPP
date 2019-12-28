/*eg-1 of inline fn*/

#include<iostream.h>
#include<conio.h>

inline int getMax(int a,int b)
{
	return a>b?a:b;
}

void main()
{
	int no1,no2;
	clrscr();
	cout<<"Enter 2 nos:- ";
	cin>>no1>>no2;
	cout<<"Maximum from two given nmumbers is :- "<<getMax(no1,no2);
	getch();
}
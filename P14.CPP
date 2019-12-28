//define  fn to swap the values in 2 vars from main()
//Process is called "Call by Reference"
//Result achieved

#include<iostream.h>
#include<conio.h>

void swap(int &,int &);	//fn decln

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter values of a and b :- ";
	cin>>a>>b;
	cout<<"Before swapping a= "<<a<<" and b= "<<b<<endl;
	swap(a,b);
	cout<<"After swapping a= "<<a<<" and b= "<<b<<endl;
	getch();
}

void swap(int & a,int & b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

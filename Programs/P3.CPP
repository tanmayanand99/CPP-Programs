//to accept name from user and display it on screen

#include<iostream.h>
#include<conio.h>

void main()
{
	char name[10];
	clrscr();
	cout<<"Enter your name:- ";
	cin>>name;
	int age;	//Liberty to declare variable wherever reqd
	cout<<"Enter your age:- ";
	cin>>age;
	cout<<"Dear "<<name<<", your age next year will be "<<age+1;
	getch();
}
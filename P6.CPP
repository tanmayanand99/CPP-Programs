//An eg. of typecasting and manupilators with argument

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	float pi=(float)22/7;
	clrscr();
	cout<<setprecision(2)<<setw(20)<<setfill('*')<<endl;
	cout<<pi;
	getch();
}
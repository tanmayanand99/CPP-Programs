/*An eg. of fn overloading in which the order of parameters is different*/

#include<iostream.h>
#include<conio.h>

void prdt(int x,int y)
{
	cout<<"Invocation of prdt(int,int)"<<endl;
	cout<<"Product is "<<x*y<<endl;
}

void prdt(double x,double y)
{
	cout<<"Invocation of prdt(double,double)"<<endl;
	cout<<"Product is "<<x*y<<endl;
}

void prdt(int x,double y)
{
	cout<<"Invocation of prdt(int,double)"<<endl;
	cout<<"Product is "<<x*y<<endl;
}

void prdt(double x,int y)
{
	cout<<"Invocation of prdt(double,int)"<<endl;
	cout<<"Product is "<<x*y<<endl;
}

void main()
{
	clrscr();
	prdt('a','b');	//prdt(int,int),will print prdt of ASCII codes of
			//of a and b i.e. 97*98
	prdt(10,20);	//int,int
	prdt(10.0,20.0);	//double,double
	prdt(10,20.0);	//int,double
	prdt(10.0,20);	//double,int
	prdt(10,20.0F);	//int,double
	prdt(10.0F,20.0F);	//double,double
	getch();
}
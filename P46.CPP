/*Eg-2 of default arguments to a fn*/

#include<iostream.h>
#include<conio.h>

//fn decln
void fn(int a=10,int b=20,int c=30);
/*in default values of a fn we cannot define default value in between
arguments. Only trailing arguments can have default values.
We can only use constants as values to these variables.*/

void main()
{
	clrscr();
	fn();	//all default values considered
	fn(15);	//last 2 default values considered
	fn(15,25);	//only last default value considered
	fn(15,25,35);	//all default values ignored
	getch();
}

void fn(int x,int y, int z)
{
	cout<<"a= "<<x<<",b= "<<y<<",c= "<<z<<endl;
}
/*to prove that memory allocated dynamically can be released*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int *x, *y;
	x= new int;
	*x=5;
	clrscr();
	cout<<"x is pointing to value "<<*x<<endl;
	cout<<"Adr to which x is pointing is "<<(unsigned int)x<<endl;
	delete x;
	y=new int(10);	//same as *y=10;
	cout<<"y is pointing to value "<<*y<<endl;
	cout<<"Adr to which y is pointing is "<<(unsigned int)y<<endl;
	cout<<"Adr of x is "<<(unsigned int)&x<<" and adr of y is "
	<<(unsigned int)&y<<endl;
	getch();
}
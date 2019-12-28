/*write a fn to return the absolute value of any given no*/

#include<iostream.h>
#include<conio.h>

//fn decln
int abs(int);
long abs(long);

void main()
{
	int i=-12345;
	long l=50000;
	float f=75000.14;
	clrscr();
	i=abs(i);
	l=abs(l);
	//f=abs(f);	//ambiguity error between abs(int) and abs(long)
	f=abs(long(f));	//tpyecast and call the abs()
	cout<<"Abs value of i is "<<i<<endl;
	cout<<"Abs value of l is "<<l<<endl;
	cout<<"Abs value of f is "<<f;
	getch();
}

int abs(int no)
{
	if(no<0)
		return -no;
	return no;
}

long abs(long no)
{
	if(no<0)
		return -no;
	return no;
}



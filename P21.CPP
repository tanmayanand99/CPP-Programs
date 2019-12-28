/*an eg of a fn in which returns a var and not a value
which it does usually*/

#include<iostream.h>
#include<conio.h>

//fn decln
int & fn(int &);

void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"Before fn(), a= "<<a<<" and b= "<<b<<endl;
	fn(a)=b;	//odd syntax
	cout<<"After fn(), a= "<<a<<" and b= "<<b<<endl;
	getch();
}

int & fn(int & a)
{
	a++;
	return a;
}


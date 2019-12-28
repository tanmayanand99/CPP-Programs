//an example of scope resolution operator

#include<iostream.h>
#include<conio.h>

int a=10,b=20;		//global variables

void display();		//fn decln

void main()
{
	int b=30;	//local variable
	::a++;		//OK global variable incremented,
			//a++; is also allowed in this case
			//as there is no local var a in main()
	b++;		//OK local variable incremented
			//::b++; increments global var b
	clrscr();
	cout<<"In main() global var a="<<a<<" and local var b is "
	<<b<<endl;
	cout<<"In main() global var b="<<::b<<endl;
	display();	//fn call
	getch();
}

void display()		//fn definition
{
	cout<<"In display() global var a="<<a<<" and global var b="
	<<b<<endl;
}



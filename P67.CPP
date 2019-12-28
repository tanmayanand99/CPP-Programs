//an eg. of fn overriding

#include<iostream.h>
#include<conio.h>

class A
{
	public:
		void display()
		{
			cout<<"A's implementation/version of display"<<endl;
		}
};

class B: public A
{
	public:
		//overriding
		void display()
		{
			//optional
			//display();	//will go in endless recursion
			A::display();	//to call overriden fn
			//classname is optional if fn names are different
			cout<<"B's implementation/version of display"<<endl;
		}
};

void main()
{
	clrscr();
	B objb;
	objb.display();
	getch();
}

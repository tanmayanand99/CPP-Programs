/*To use base classs pointer to use base orderived class object*/

#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		void test()
		{
			cout<<"Invocation of base class's test()"<<endl;
		}
};

class Derived:public Base
{
	public:	//overriding
		void test()
		{
			cout<<"Invocation of derived class's test()"<<endl;
		}
};

void main()
{
	clrscr();
	Base *bptr;
	Base objb;
	Derived objd;
	bptr=&objb;
	bptr->test();	//base class's test()
	bptr=&objd;
	bptr->test();	//base class's test()

	((Derived*)bptr)->test();
	/*if base class ptr is type cast to derived class ptr, it will
	refer to derived class fns*/
	getch();
}

/*Alternatively, if we declare the base class fn test() as virtual,
there is no need to type cast the base class ptr*/
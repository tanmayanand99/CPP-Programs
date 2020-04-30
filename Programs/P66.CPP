/*an eg. of hiding of base class member*/

#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		int i,j;
};

class Derived: public Base
{
	public:
		int i;	//OK, but hides base class member "i"
};

void main()
{
	clrscr();
	Derived objd;
	cout<<"Size of objd is "<<sizeof(objd)<<endl;
	objd.i=10;	//derived  class i
	objd.j=20;	//derived class j
	objd.Base::i=30;	//base class i
	cout<<"i of derived class is "<<objd.i<<endl;
	cout<<"j of derived class is "<<objd.j<<endl;
	cout<<"i of base class is "<<objd.Base::i<<endl;
	getch();
}

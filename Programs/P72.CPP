/*eg-1 of constructors in inheritance as well as destructors*/

#include<iostream.h>
#include<conio.h>

class A
{
	public:
		A()
		{
			cout<<"Invocation of default constructor of A"<<endl;
		}
		~A()
		{
			cout<<"Invocation of destructor of A"<<endl;
		}
};

class B :public A
{
	public:
		B() //	:A()	//inscribed automatically by complier
		{
			cout<<"Invocation of default constructor of B"<<endl;
		}
		~B()
		{
			cout<<"Invocation of destructor of B"<<endl;
		}
};



class C :public B
{
	public:
		C() //	:B()	//inscribed automatically by complier
		{
			cout<<"Invocation of default constructor of C"<<endl;
		}
		~C()
		{
			cout<<"Invocation of destructor of C"<<endl;
		}
};

void main()
{
	clrscr();
	C objc;
	getch();
}

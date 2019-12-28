/*eg of parametarised constructor in inheritance*/

#include<iostream.h>
#include<conio.h>

class A
{
	public:
		A()
		{
			cout<<"Invocation of default constructor of A"<<endl;
		}
};

class B:public A
{
	protected:
		int x,y;
	public:
		B(int x1,int y1)	//:A() inserted automatically
					//by compiler
		{
			cout<<"Invocation of parameterised constructor of B"
			<<endl;
			x=x1;
			y=y1;
		}
};

class C:public B
{
	int z;

	public:
		C(int x1,int y1, int z1):B(x1,y1)
		/*now default constructor of B is not invoked.
		Even parameterised constuctors of derived class
		call the defualt constructor of base class automatically,
		provided they do noy call parameterised constructor of
		base class manually*/

		{
			z=z1;
			cout<<"Invocation of parametarised constructor of C"
			<<endl;
		}

		void display()
		{
			cout<<"x= "<<x<<", y= "<<y<<", z= "<<z<<endl;
		}
};

void main()
{
	clrscr();
	C objc(10,20,30);
	objc.display();
	//C objc1;	//error no default constructor
	getch();
}


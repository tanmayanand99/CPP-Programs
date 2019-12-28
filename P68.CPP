/*an eg of private inheritance*/

#include<iostream.h>
#include<conio.h>

class A
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
};

/*the type of inheritance here affects the access rights to base class
members for subsequent derived classes and not immediate derived class.
For immediate derived class, the access rights defined for member in
base class are only applicable*/

class B: private A
{
	public:
		void setvalues()
		{
			//x=10;
			//error, x has private access
			y=20;	//OK,protected members are accesible
			//to derived classes only
			z=30;	//OK as it is public

		}

		void getvalues()
		{
			cout<<"y= "<<y<<" ,z= "<<z<<endl;
		}
};


class C: private B
{
	public:
		void setvalues()
		{
			x=15;	//error,as members are pvt now
			y=20;   //error
			z=14;   //error
		}
};

void main()
{
	clrscr();
	C objc
	objc.z=35;	//error
}





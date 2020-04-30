/*Eg. of copy constructor to create fraction object*/

#include<iostream.h>
#include<conio.h>

class Fraction
{
	int numer,denom;

	public:
		//overloading of constructors
		Fraction(int n=5,int d=2);
		Fraction(Fraction &);	//& is compulsory i.e. the copy
					//constructor requires a object
					//reference of source object
		float calc();
};

Fraction::Fraction(int n ,int d)
{
	numer=n;
	denom=d;
}

Fraction::Fraction(Fraction & objf)
{
	/*numer and denom are data members of implicit object i.e. of the
	object under construction*/
	numer=objf.numer;
	denom=objf.denom;
}

float Fraction::calc()
{
	return (float)numer/denom;
}

void main()
{
	clrscr();
	Fraction f1(1,3),f2(f1);
	cout<<"f1 contains "<<f1.calc()<<endl;
	cout<<"f2 contains "<<f2.calc()<endl;
	getch();
}

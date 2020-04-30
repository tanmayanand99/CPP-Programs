/*Oberload the binary operator + as member function for adding 2
fractions and 1 fraction and 1 integer*/

#include<iostream.h>
#include<conio.h>

class Fraction
{
	int numer,denom;

	public:
		Fraction(int n=0,int d=1);
		/*parameterised constructor with default values
		for arguments*/

		Fraction operator +(Fraction);
		/*const and & are optional*/
		/*As it is a member function it will require object
		for invocation. Hence one set of numer anddenom is
		available implicitly. The fn tales another fn object
		passed explicitly from which numer and denom are to be
		added*/
		Fraction operator +(int); //overloaded fn
		void display();
}

Fraction::Fraction(int n,int d)
{
	numer=n;
	denom=d;
}

Fraction Fraction::operator +(Fraction f2)
{
	Fraction f;	//will call constructor with default values for
			//arg
	f.numer=numer*f2.denom+denom*f2.numer;
	f.denom=denom*f2.denom;
	return f;
}

Fraction Fraction::operator +(int no)
{
	Fraction f;
	f.numer=numer*1+denom*no;
	f.denom=denom*1;
	return f;
}

void Fraction::display()
{
	cout<<numer<<"/"<<denom<<endl;
}

void main()
{
	Fraction f1(2,3),f2(1,5),f3,f4;
	int no=4;
	clrscr();
	f3=f1+f2;	//same as
			//f3=f1.operator + (f2); //not preferred
	f4=f1+no;	//same as
			//f1.operator +(no)	//not preferred
	cout<<"f1 contains ";
	f1.display();
	cout<<"f2 contains ";
	f2.display();
	cout<<"f3 contains ";
	f3.display();
	cout<<"f4 contains ";
	f4.display();
	getch();
}
/*An. eg of parametarised constructor with default values*/

#include<iostream.h>
#include<conio.h>

class Fraction
{
	int numer,denom;

	public:
		Fraction(int,int);
		float calc();
};

Fraction::Fraction(int n=5,int d=2)
{
	numer=n;
	denom=d;
	cout<<"Paremetarised constructor invoked "<<endl;
}

float Fraction::calc()
{
	return (float)numer/denom;
}

void main()
{
	clrscr();
	Fraction f1;	//error, no default constructor for class Fraction
	//Solution 1-overload constructor with a default constructor
	//Solution 2-provide default values for args numer and denom

	//Fraction f1(2,3);	//Solution 3-provide values for numer and
				//denom
	cout<<"2/3 is "<<f1.calc();
	getch();
}


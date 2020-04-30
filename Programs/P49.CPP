/*an eg. of default constructor(parameterless constructor)*/

/*define a class Fraction with constructor accepting values for numerator
and denominator*/

#include<iostream.h>
#include<conio.h>

class Fraction
{
	int numer,denom;
	public:
		Fraction();
		void display();
};

Fraction::Fraction()
{
	cout<<"Default constructor invoked"<<endl;
	cout<<"Enter numerator and denominator:- ";
	cin>>numer>>denom;
}

void Fraction::display()
{
	cout<<"Numer= "<<numer<<",Denom= "<<denom<<endl;
}

void main()
{
	clrscr();
	Fraction f1;	//calling constructor implicitly
	Fraction f2= Fraction();	//calling constructor explicitly
					//not used much
	Fraction();	//OK,but creates a nameless object
			//we annot invoke other fns
	cout<<"f1 contains ";
	f1.display();
	cout<<"f2 contains";
	f2.display();
	//f1.Fraction();	//error, constructor cannot be invoked again
	getch();
}
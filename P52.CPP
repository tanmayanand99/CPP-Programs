/*Using copy constructor determine and display factorial value of any
given while no.*/

#include<iostream.h>
#include<conio.h>

class Factorial
{
	int no;
	long unsigned int fv;

	public:
		Factorial(int,long unsigned int f=1);
		Factorial(const Factorial &);
};

Factorial::Factorial(int n,long unsigned int f)
{
	no=n;
	fv=f;
}

Factorial::Factorial(const Factorial & objf )
{
	no=objf.no;
	fv=objf.fv;

	for(int i=2;i<=no;i++)
		fv=fv*i;

	cout<<"FV of "<<no<<" is "<<fv;
}

void main()
{
	clrscr();
	int no;
	cout<<"Enter any number :- " ;
	cin>>no;
	Factorial f1(no),f2(f1);
	getch();
}

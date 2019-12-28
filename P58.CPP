/*overload the unary operator - to return absolute value of any given whole
no.*/

#include<iostream.h>
#include<conio.h>

class Abs
{
	int no;

	public:
		Abs(int);	//parameterised constructor
		/*if unary operator is overloaded as amember operator
		fn, it will not take any arguments because the implicit
		object used to invoke or call that fn will provide the
		member on which the fn is to be operated*/
	//void -();	//invalid identifier
	void operator -();	//Preceed operator symbol by keyword
				//operator(VI).
	void display();
};

Abs::Abs(int no)
{
	this->no=no;	/*if name of data member and argument to fn is same,
			then use "this" keyword which is a ptr to
			implicit object*/
}

void Abs::operator -()
{
	if(no<0)
		no=-no;
}

void Abs::display()
{
	cout<<no<<endl;
}

void main()
{
	clrscr();
	int no;
	cout<<"Enter any no:- ";
	cin>>no;
	Abs obj(no);
	-obj;	//same as obj.operator -();
		//Ok but not preferred
	cout<<"Absolute value of given no is:- ";
	obj.display();
	getch();
}
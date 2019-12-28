/*To overload unary operator - as a friend fn to return the absolute
value of given integer*/

#include<iostream.h>
#include<conio.h>

class Abs
{
	int no;

	public:
		Abs(int);
		friend void operator -(Abs &);
		/*as it is a friend fn, it will require one
		parameter. Here & is compulsory because if
		change is made in reference, it will ensure changes
		in original object*/
	void display();
};

Abs::Abs(int x)
{
	no=x;
}

void operator -(Abs & obja)
{
	if(obja.no<0)
		obja.no=-obja.no;
}

void Abs::display()
{
	cout<<"Absolute value of given no is:- "<<no<<endl;
}

void main()
{
	int no;
	clrscr();
	cout<<"Enter a no:- ";
	cin>>no;
	Abs obj(no);
	-obj;	  //same as (standard call)
		  //operator -(obj); //not preferred
	obj.display();
	getch();
}
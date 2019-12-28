/*Overload the opeerators << and >> so that they can be used on
user defined types*/

#include<iostream.h>
#include<conio.h>

class Emp
{
	int id;
	char name[10];
	float sal;

	public:
		/*do not define constructor or accept() or display() fns*/
		friend ostream & operator <<(ostream &,const Emp &);
		friend istream & operator >>(istream &,Emp &);
};

ostream & operator <<(ostream & out,const Emp & obje)
{
	out<<"Empid:- "<<obje.id<<", Name:- "
	<<obje.name<<", Salary:- "<<obje.sal<<endl;
	return out;
}

istream & operator >>(istream & in, Emp & obje)
{
	in>>obje.id>>obje.name>>obje.sal;
	return in;
}

void main()
{
	clrscr();
	Emp e1,e2;
	cout<<"Enter details for 2 employees:- "<<endl;
	cin>>e1>>e2;
	cout<<"Details of 2 employees are:- "<<endl;
	cout<<e1<<e2;
	getch();
}
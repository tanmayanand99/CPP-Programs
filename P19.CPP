/*an eg of ref of a struct*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>


struct emp
{
	int id;
	char name[10];
	float sal;
};

void modify(emp &);

void main()
{
	emp e={100,"Ramesh",15000.56};
	clrscr();
	cout<<"Before modify()"<<endl;
	cout<<"Name:- "<<e.name<<endl;
	cout<<"ID:- "<<e.id<<endl;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout<<"Salary:- "<<e.sal<<endl;
	modify(e);
	cout<<"After modify()"<<endl;
	cout<<"Name:- "<<e.name<<endl;
	cout<<"ID:- "<<e.id<<endl;
	cout<<setprecision(2);
	cout<<"Salary:- "<<e.sal<<endl;
	getch();
}

void modify(emp & e)
{
	e.sal=15000.32;
	e.id=12345;
	strcpy(e.name,"Mahesh");
}


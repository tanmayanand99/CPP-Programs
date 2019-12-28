//an eg of ennumeration nested in a struct
#include<iostream.h>
#include<conio.h>

enum dept_names
{
	it, sales,admin,accounts	//no ; inside and default numbering
					//is 0 1 2 3...
};

struct emp
{
	int id;
	char name[10];
	float sal;
	dept_names dept;
};

void main()
{
	emp e={123,"harish",15000.35,admin};
	clrscr();
	cout<<"Empid:- "<<e.id<<endl;
	cout<<"Name:- "<<e.name<<endl;
	cout<<"Salary:- "<<e.sal<<endl;
	cout<<"Department:- "<<e.dept<<endl;      //returns position
						  //and not the name
	if(e.dept==0)
		cout<<"Dept-IT";
	else if(e.dept==1)
		cout<<"Dept-SALES";
	else if(e.dept==2)
		cout<<"Dept-ADMINISTRATION";
	else
		cout<<"Dept-ACCOUNTS";
	getch();
}



/*WAP to accept recs of emp and display if found in file*/

#include<fstream.h>
#include<conio.h>

class Emp
{
	int empid;
	char name[10];
	float sal;

	public:
		void display()
		{
			cout<<"Empid:- "<<empid<<" name:- "<<" sal:- "<<sal;
			cout<<endl;
		}
		//bcoz we need to refer empid in main()
		int getId()
		{
			return empid;
		}
};

void main()
{
	ifstream fin("recs.dat",ios::binary);
	Emp e;
	int id,flag=0;
	clrscr();
	cout<<"Enter the empid:- ";
	cin>>id;
	//iterate through all records
	while(fin.read((char *)&e,sizeof(e)))
	{
		//if(id==e.empid)	//error, empid is inaccessible
		if(id==e.getId())	//Ok bcoz fn is public
		{
			flag=1;
			break;
		}
	}

	if(flag)
	{
		cout<<"Record found, details are:- "<<endl;
		e.display();
	}
	else
		cout<<"Record with empid "<<id<<" not found";
	fin.close();
	getch();
}
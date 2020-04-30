/*WAP to delete record of an employee*/


#include<fstream.h>
#include<conio.h>
#include<stdio.h>


class Emp
{
	int empid;
	char name[10];
	float sal;

	public:
		void display()
		{
			cout<<empid<<"\t"<<name<<"\t"<<sal<<endl;
		}
		int getEmpId()
		{
			return empid;
		}
};

void main()
{
	clrscr();
	Emp e;
	ifstream fin;
	int flag=0;

	fin.open("recs.dat",ios::in|ios::binary);
	//1st display all records with posn i.e. sr no
	int pos=1;
	cout<<"SrNo\tEmpid\tName\tSalary\n";
	while(fin.read((char *)&e,sizeof(e)))
	{
		cout<<pos<<"]\t";
		e.display();
		pos++;
	}
	fin.close();

	int id;
	cout<<"Enter id of record to delete:- ";
	cin>>id;

	fin.open("recs.dat",ios::in|ios::binary);

	while(fin.read((char *)&e,sizeof(e)))
	{
		if(e.getEmpId()==id)
		{
			flag=1;
			break;
		}
	}
	fin.close();

	if(!flag)
	{
		cout<<"Record with id "<<id<<" not found";
	}
	else
	{
		ofstream fout;
		fout.open("temp.dat",ios::out|ios::binary);
		fin.open("recs.dat",ios::in|ios::binary);
		fin.seekg(0,ios::beg);
		fin.read((char *)&e,sizeof(e));

		while(!fin.eof())
		{
			if(e.getEmpId()!=id)
				fout.write((char *)&e,sizeof(e));
			fin.read((char *)&e,sizeof(e));
		}
		fout.close();
		fin.close();

		//confirmation
		cout<<"Record deleted successfully"<<endl;
		remove("recs.dat");
		rename("temp.dat","recs.dat");

		fin.open("recs.dat",ios::in|ios::binary);
		pos=1;
		cout<<"SrNo\tEmpid\tName\tSalary\n";
		while(fin.read((char *)&e,sizeof(e)))
		{
			cout<<pos<<"]\t";
			e.display();
			pos++;
		}
		fin.close();
	}
	getch();
}





















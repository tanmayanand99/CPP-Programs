/*WAP to accept recs of emp and store them in a file using binary mode*/

#include<fstream.h>
#include<conio.h>

class Emp
{
	int empid;
	char name[10];
	float sal;

	public:
		void accept()
		{
			cout<<"Enter empid,name and sal:- ";
			cin>>empid>>name>>sal;
		}
		void display()
		{
			cout<<"Empid:- "<<empid<<"  name:- "<<name
			<<"  Salary:- "<<sal<<endl;
		}
};

void main()
{
	ofstream fout("recs.dat",ios::binary|ios::app);
	//app-append mode, also creates new file
	Emp e;
	int nor;
	clrscr();
	cout<<"Enter the no. of employees:- ";
	cin>>nor;
	for(int i=0;i<nor;i++)
	{
		e.accept();
		//write record to file
		fout.write((char *)&e,sizeof(e));
	}
	fout.close();
	//to confirm
	ifstream fin("recs.dat",ios::binary|ios::in);
	//2nd parameter is optional i.e. ios::in
	cout<<"Recs of emp are:- "<<endl;
	while(fin.read((char *)&e,sizeof(e)))
	{
		e.display();
	}
	getch();
}


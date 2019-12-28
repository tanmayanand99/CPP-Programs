/*WAP to accept details of a record of an employee from user and then
modify it*/


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
			cout<<"Enter new empid,name and salary:- ";
			cin>>empid>>name>>sal;
		}
		void display()
		{
			cout<<empid<<"\t"<<name<<"\t"<<sal<<endl;
		}
};

void main()
{
	clrscr();
	Emp e;
	ifstream fin("recs.dat",ios::in|ios::binary);
	//1st display all records with posn i.e. sr no
	int pos=1;
	cout<<"Srno\tEmpid\tName\tSalary\n";
	while(fin.read((char *)&e,sizeof(e)))
	{
		cout<<pos<<"]\t";
		e.display();
		pos++;
	}
	fin.close();
	int no;
	cout<<"Enter position of record to modify:- ";
	cin>>no;
	//validation
	if(no<1 || no>=pos)
	{
		cout<<"Invalid position, try again";
		getch();
		return;
	}
	//open the same file in ofstream for modifications.
	//ios::ate allows us to search a record and modify it

	ofstream fout("recs.dat",ios::binary|ios::ate|ios::out);
	//app mode cannot modify
	cout<<"Enter modifications:- "<<endl;
	e.accept();
	fout.seekp((no-1)*sizeof(e),ios::beg);
	fout.write((char *)&e,sizeof(e));
	fout.close();


	//to confirm
	cout<<"Changes made successfully";
	getch();
	clrscr();
	fin.open("recs.dat",ios::binary|ios::in);
	pos=1;
	cout<<"Srno\tEmpid\tName\tSalary\n";
	while(fin.read((char *)&e,sizeof(e)))
	{
		cout<<pos<<"]\t";
		e.display();
		pos++;
	}
	fin.close();
	getch();
}

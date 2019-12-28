/*an example of virtual keyword in hybrid inheritance*/
/*Deine a class "Student" with data members roll no and name. Define a class
"Theory" which inherits Student and has data members to accept marks in
5 subjects. Define a class "Practical" to accept marks of 2 practicals.
Define a class "Marksheet" which inherits "Theory" and "Practical" with
data members total and % obtained. Display marksheet of Student*/

#include<iostream.h>
#include<conio.h>

class Student
{
	protected:	//imp otherwise, roll no and anme will
			//be accessed in class marksheet
		int rollno;
		char name[10];
		void accept();
};

class Theory:virtual public Student
{
	protected:
		int th_marks[5];
		void accept();	//overiding
};

class Practical:virtual public Student
{
	protected:
		int prac_marks[2];
		void accept();
};

class Marksheet:public Theory,public Practical
{
	int total;
	float per;

	public:
		void accept();
		void display();
};

void Student::accept()
{
	cout<<"Enter rollno and name of student:- ";
	cin>>rollno>>name;
}

void Theory::accept()
{
	cout<<"Enter marks in 5 subjects:- ";
	for(int i=0;i<5;i++)
		cin>>th_marks[i];
}

void Practical::accept()
{
	cout<<"Enter marks in 2 practicals:- ";
	for(int i=0;i<2;i++)
		cin>>prac_marks[i];
}

void Marksheet::accept()
{
	Student::accept();
	Theory::accept();
	Practical::accept();

	total=0;

	for(int i=0;i<5;i++)
		total+=th_marks[i];

	for(i=0;i<2;i++)
		total+=prac_marks[i];

	per=(float)total/7;
}

void Marksheet::display()
{
	cout<<"***	RESULT	***\n";
	cout<<"Roll no:- "<<rollno<<endl;
	cout<<"Name:- "<<name<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Marks in theoru subjects:- "<<endl;
	for(int i=0;i<5;i++)
		cout<<th_marks[i]<<endl;
	cout<<"Marks in practical subjects:- "<<endl;
	for(i=0;i<2;i++)
		cout<<prac_marks[i]<<endl;
	cout<<"Total Marks:- "<<total<<endl;
	cout<<"Percentage:- "<<per<<endl;
	cout<<"***	END OF RESULT	***"<<endl;
}

void main()
{
	clrscr();
	Marksheet m;
	m.accept();
	m.display();
	getch();
}
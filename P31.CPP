/*Define a class Student with data members rolno,name and percent.
Define a static member teacher,name and functions to accept and
display data of students*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char name[10];
	float per;
	static char teacher_name[15];

	public:
		void accept();
		void display();
		static void display_teacher();
};

/*it is compulsory to initialise static member and do not use static
over here again*/

char Student::teacher_name[]={"Shevade Sir"};

void Student::accept()
{
	cout<<"Enter name,rollno and per:- ";
	cin>>name>>rollno>>per;
}

void Student::display()
{
	cout<<"Roll no- "<<rollno<<" ,Name- "<<name<<" ,Percent- "<<
	per<<endl;
	cout<<"My teacher name is "<<teacher_name<<endl;
}

void Student::display_teacher()
{
	//error, roll no is not accesible
	//cout<<rollno;  //instance members are created in future
			 //static members are created in present
			 //Hence from present, we cannot look into future
	cout<<"Our teacher name is "<<teacher_name<<endl;
}

void main()
{
	Student s1,s2,s3;
	clrscr();
	s1.accept();
	s2.accept();
	s3.accept();
	cout<<"Details of 3 students are:- "<<endl;
	s1.display();
	s2.display();
	s3.display();
	//error,teacher name is private and hence inacessible
	//cout<<"Our teacher name is "<<teacher_name;
	Student::display_teacher();
	s1.display_teacher();	//OK but not recommended
	getch();
}
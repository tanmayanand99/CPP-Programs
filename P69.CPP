/*Define a class Student with data members rollno and anme. Define another
class Project with data members id and guide. Define a class Student_proj
which inherits noth Student and Project and with additional data members
duration and marks.
Create record of 1 student details and display it*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char name[10];

	protected:	//accesible to derived classes only
		void getdata();
		void putdata();
};

class Project
{
	int projid;
	char guide[10];

	protected:
		//this is not overriding as Student and
		//Project classes are independent
		void getdata();
		void putdata();
};

class Student_proj:public Student, public Project
{
	int duration,marks;

	public:
		//compulsory public as they have to be accessed from main()
		void getdata();         //overriding
		void putdata();		//overriding
};

void Student::getdata()
{
	cout<<"Enter roll no and name:- ";
	cin>>rollno>>name;
}

void Student::putdata()
{
	cout<<"Roll no:- "<<rollno<<", Name:- "<<name<<endl;
}

void Project::getdata()
{
	cout<<"Enter project id and guide name:- ";
	cin>>projid>>guide;
}

void Project::putdata()
{
	cout<<"Proj id:- "<<projid<<", Guide name:- "<<guide<<endl;
}

void Student_proj::getdata()
{
	//IMP
	Student::getdata();
	Project::getdata();

	cout<<"Enter duration and marks:- ";
	cin>>duration>>marks;
}

void Student_proj::putdata()
{
	Student::putdata();
	Project::putdata();
	cout<<"Duration:- "<<duration<<", Marks:- "<<marks<<endl;
}

void main()
{
	clrscr();
	Student_proj s1;
	s1.getdata();
	s1.putdata();
	getch();
}


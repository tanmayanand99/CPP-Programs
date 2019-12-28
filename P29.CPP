/*design a class "Student" with data members roll.no,name,DOB and percent.
Create a record of student and display his details*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char name[10];
	float per;
	//Date dt;	//error, no such type

	class Date	//user defined type
	{
		int dd,mm,yyyy;
		public:
			void accept_dt();
			void display_dt();
	};

	Date bdt;
	public:
		void accept();
		void display();
};

void Student::Date::accept_dt()
{
	cout<<"Enter the birthdate in format dd/mm/yyyy:- ";
	cin>>dd>>mm>>yyyy;
}

void Student::Date::display_dt()
{
	cout<<"The birthdate of student is:- "<<dd<<"/"<<mm<<"/"<<yyyy;
}

void Student::accept()
{
	cout<<"Enter the rollno,name and per of student:- ";
	cin>>rollno>>name>>per;

	//cin>>bdt;	//error, << or >> operator can be used
			//with predefined datatypes only.
			//However, to use them with user defined
			//types, we have to overload these operators.
	bdt.accept_dt();	//OK,fns can be called using
				//using object references only.

}

void Student::display()
{
	cout<<"Roll no:- "<<rollno<<", Name:- "<<name<<", Percent:- "
	<<per<<endl;
	//cout<<bdt;	//error
	bdt.display_dt(); 	//OK
}

void main()
{
	clrscr();
	Student a;
	a.accept();
	a.display();
	//student::Date dt;	//OK if you want to display only date use
				//this
	//dt.accept_dt():  	//OK
	//dt.display_dt();     	//OK
	getch();
}

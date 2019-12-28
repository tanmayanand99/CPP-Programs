/*design a class "Student" with fields rollno, nameand percent and functions
to accept and display it*/

#include<iostream.h>
#include<conio.h>

class Student
{
	//deafault access specifier in a class defn is "private"
	//According to OOPs principles, fields/data members should
	//be private and fns should be public
	private:	//optional,default
		int rollno;
		char name[10];
		float per;
	public:	//compulsory, not default
		void accept()
		{
			cout<<"Enter roll number, name and per:- ";
			cin>>rollno>>name>>per;
		}

		void display()
		{
			cout<<"Roll no:- "<<rollno<<"name:- "
			<<name<<" percent:- "<<per<<endl;
		}
};

void main()
{
	Student s1,s2;
	clrscr();
	//s1.rollno;	//error,roll no is not accesible
	s1.accept();
	s2.accept();
	cout<<"Details of 2 students are:- "<<endl;
	s1.display();
	s2.display(); 	//display();	//error,fns are referred
					//using objects only
	getch();
}

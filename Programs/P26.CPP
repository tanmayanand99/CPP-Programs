/*same as previous program but assign memory dynamically*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char name[10];
	float per;

	public:
		void accept()
		{
			cin>>rollno>>name>>per;
		}
		void display()
		{
			cout.precision(2);
			cout.setf(ios::fixed);
			cout<<"Rollno:- "<<rollno<<" Name:- "<<name
			<<" Percent:- "<<per<<endl;
		}
};

void main()
{
	Student *ptr_s1,*ptr_s2;
	clrscr();
	ptr_s1=new Student;
	cout<<"Enter rollnp, name and percent of student 1:-";
	ptr_s1->accept();
	cout<<"Details of student 1 are:-"<<endl;
	ptr_s1->display();
	delete ptr_s1;
	ptr_s2=new Student;
	cout<<"Enter rollno, name and percent of student 2:-";
	ptr_s2->accept();
	cout<<"Details of student 2 are:-"<<endl;
	ptr_s2->display();
	delete ptr_s2;
	getch();
}


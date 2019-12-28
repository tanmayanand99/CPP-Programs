/*same as previous program but assign memory dynamically
to an array of objects*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char name[10];
	float per;

	public:
		void accept();
		void display();
};
/*if the fn is declared inside the class but defined outside, then the
defn should contain return_type classname::fn_name*/



void Student::accept()
{
	cin>>rollno>>name>>per;
}

void Student::display()
{
	cout.precision(2);
	cout.setf(ios::fixed);
	cout<<"Rollno:- "<<rollno<<" Name:- "<<name
	<<" Percent:- "<<per<<endl;
}




void main()
{
	clrscr();
	int nos;
	cout<<"Enter the number of students:- ";
	cin>>nos;
	Student *ptr;
	ptr= new Student[nos];
	cout<<"Enter detials of "<<nos<<" students:- "<<endl;
	for(int i=0;i<nos;i++)
	{
		ptr[i].accept();
	}
	cout<<"Details of "<<nos<<" students are :- "<<endl;
	for(i=0;i<nos;i++)
	{
		ptr[i].display();
	}
	delete []ptr;
	getch();
}
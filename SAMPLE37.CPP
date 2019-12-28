/*An example of a friend function which is a member function of
another class Student with data members rollno,name and per.
Define a class "Adm" with a fn "display_merit_list()" which will display
only data of students who have scored >=75%*/

#include<iostream.h>
#include<conio.h>

/*Important:- Forward decln of a class which "contains" the data*/

class Student;	/*forward decln*/

class Adm
{
	public:
		void display_merit_list(const Student &);
};

class Student
{
	int rollno;
	char name[10];
	float per;

	public:
		void accept();
		friend void sort(Student *);
		friend void Adm::display_merit_list(const Student &);

};

void Student::accept()
{
	cout<<"Enter rollno, name and per of student:- ";
	cin>>rollno>>name>>per;
}

void Adm::display_merit_list(const Student & obj)
{
	if(obj.per>=75)
	{
		cout<<obj.rollno<<"\t"<<obj.name<<"\t"<<obj.per<<endl;
	}
}

void sort(Student arr[])
{
	Student temp;
	for(int i=1;i<6;i++)
	{
		for(int j=0;j<6-i;j++)
		{
			if(arr[j].per<arr[j+1].per)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}



void main()
{
	clrscr();
	Student arr[6];
	cout<<"Enter data of 6 students:- "<<endl;
	for(int i=0;i<6;i++)
		arr[i].accept();
	Adm obja;	//for reference
	sort(arr);
	cout<<"Details of merit holders is "<<endl;
	cout<<"Rollno\tname\tpercent"<<endl;
	for(i=0;i<6;i++)
		obja.display_merit_list(arr[i]);
	getch();
}




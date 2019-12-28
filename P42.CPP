/*define a class "Student" with data members rollno,name,per. Overload
the fn search() to search the records of a student on the basis of rollno,
name or per*/
/*Logic-Here we define the class "Student" using "struct" keyword.
Members of the structure are by default declared as "public". This will
give access to all these members from anywhere*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>	//for using exit(0)
#include<string.h>

struct Student
{
	int rollno;
	char name[20];
	float per;
};

//fn declns
//search fns are normally int fns i.e. they return position of record
//from array

int search(Student *,int,int);	//search by rollno
//1st parameter is ptr to an array of student. Second is no. of records
//of array and third is for rollno.

int search(Student *,int,char[]);
int search(Student *,int,float);

void main()
{
	clrscr();
	Student *ptr;
	int nor;
	cout<<"Enter the no of recs to be entered:- ";
	cin>>nor;
	ptr=new Student[nor];
	//accept data of students
	for(int i=0;i<nor;i++)
	{
		cout<<"Enter rollno,name and per of student:- ";
		cin>>ptr[i].rollno>>ptr[i].name>>ptr[i].per;
	}
	int choice,pos,rno;
	char nm[10];
	float percent;

	while(1)
	{
		clrscr();
		cout<<"Search program  "<<endl;
		cout<<"1.Search by rollno"<<endl;
		cout<<"2.Search by name"<<endl;
		cout<<"3.Search by percent"<<endl;
		cout<<"4.Exit program"<<endl;
		cout<<"Enter your choice:- ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter the rollno:- ";
				cin>>rno;
				pos=search(ptr,nor,rno);
				break;
			case 2:
				cout<<"Enter the name:- ";
				cin>>nm;
				pos=search(ptr,nor,nm);
				break;
			case 3:
				cout<<"Enter the percentage:- ";
				cin>>percent;
				pos=search(ptr,nor,percent);
				break;
			case 4:
				exit(0);
			default:
				cout<<"Error in choice, try again";
				continue;      //go to the start of loop
		}	//end of swutch
		//display(the result)
		if(pos==-1)
			cout<<"Record not found";
		else
		{
			cout<<"Record found at position:- "<<pos+1<<endl;
			cout<<"Roll no:- "<<ptr[pos].rollno<<",Name:- "
			<<ptr[pos].name<<",Percentage:- "<<ptr[pos].per
			<<endl;
		}
		getch();
	}//end of while(1)
}//end of main()


int search(Student *ptr,int nor,int rno)
{
	for(int i=0;i<nor;i++)
	{
		if (ptr[i].rollno==rno)
			return i;
	}
	return -1;
}

int search(Student *ptr,int nor,char nm[])
{
	for(int i=0;i<nor;i++)
	{
		if(strcmp(ptr[i].name,nm)==0)
			return i;
		return -1;
	}
}

int search(Student *ptr,int nor,float percent)
{
	for(int i=0;i<nor;i++)
	{
		if(ptr[i].per==percent)
			return i;
		return -1;
	}
}



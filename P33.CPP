/*Design a class Bill with 2 data members "bill_no" and "total_amt".
Accept n bills from user and display each bill and at the end show total
no. of bills and grand total*/

#include<iostream.h>
#include<conio.h>

class Bill
{
	int billno,ttlamt;
	static int grandttl;

	public:
		void accept();
		void display();
		static int grand_ttl();
};
	int Bill::grandttl;

void Bill::accept()
{
	cout<<"Enter the bill no and amount:- ";
	cin>>billno>>ttlamt;
	grandttl+=ttlamt;
}

void Bill::display()
{
	cout<<billno<<"\t\t"<<ttlamt<<endl;
}

int Bill::grand_ttl()
{
	return grandttl;
}

void main()
{
	clrscr();
	int noe;
	cout<<"Enter the no. of bills to be printed:- ";
	cin>>noe;
	Bill *ptr;
	ptr=new Bill[noe];
	for(int i=0;i<noe;i++)
		ptr[i].accept();
	cout<<"Bill number\t"<<"Total amount"<<endl;
	for(i=0;i<noe;i++)
		ptr[i].display();
	cout<<"\n\nTotal no. of bills are:- "<<noe<<endl;
	cout<<"Grand total= "<<Bill::grand_ttl();
	delete []ptr;
	getch();
}
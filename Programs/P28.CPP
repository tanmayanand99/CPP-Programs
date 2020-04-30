/*Design a class "Accts" to manage the account of a customer from a bank*/

#include<iostream.h>
#include<conio.h>

class Accts
{
	int id,no_years,bal;
	char name[10];
	float rate,si;

	void calcsi();	//note that this fn is private
			//thus inaccesible to outside classes
			//or main fn or any other fn
	public:
		void accept();
		void display();
};

void Accts::accept()
{
	cout<<"Enter the id,name,balance and no. of years:- ";
	cin>>id>>name>>bal>>no_years;
		if(no_years<=1)
			rate=5;
		else if(no_years<=3)
			rate=5.5;
		else if(no_years>3)
			rate=6;
		calcsi();	//calling 1 fn from another fn internally
}

void Accts::display()
{
	cout<<"Name:- "<<name<<" and SI:- "<<si<<endl;
}

void Accts::calcsi()
{
	si=bal*rate*no_years/100;
}

void main()
{
	clrscr();
	Accts obj;
	obj.accept();
	obj.display();
	//obj.calcsi(); 	//error,calcsi() is not accesible
	getch();
}

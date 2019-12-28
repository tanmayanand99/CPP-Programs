//an eg of single inheritance

#include<iostream.h>
#include<conio.h>


class Acct
{
	int id;
	char name[10];

	protected:
		//these members are only accesible to derived classes
		int bal;
		void accept_acct();
		void display_acct();
};


class Saving:public Acct	//class Saving derived from class Acct
{
	float rate,si;
	public:
		void accept_saving();
		void display_saving();
};

void Acct::accept_acct()
{
	cout<<"Enter id, name and balance:- ";
	cin>>id>>name>>bal;

}

void Acct::display_acct()
{
	cout<<"Accid:- "<<id<<", Name:- "<<name<<", Balance:- "<<bal<<endl;
}

void Saving::accept_saving()
{
	accept_acct();
	rate=4.5;
	si=bal*rate/100;
}

void Saving::display_saving()
{
	display_acct();
	cout<<"Simple Interest is Rs. "<<si<<endl;
}

void main()
{
	clrscr();
	Saving s;
	s.accept_saving();
	s.display_saving();
	//error
	//Account a;
	//a.accept_acct();
	//protected members only accesible in derived classes
	getch();
}
/*define a class A with 2 data members to store 2 int values. Define a class
B with fns to determine the addn,subtrn,prdt,quot of these 2 values*/

#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;

	public:
		void accept();
		friend class B;
};

class B
{
	public:
		int calcsum(const A &);
		int calcdiff(const A &);
		int calcprdt(const A &);
		float calcquot(const A &);
};

void A::accept()
{
	cout<<"Enter 2 numbers:- ";
	cin>>a>>b;
}

int B::calcsum(const A & obja)
{
	return obja.a+obja.b;
}

int B::calcdiff(const A & obja)
{
	return obja.a-obja.b;
}

int B::calcprdt(const A & obja)
{
	return obja.a*obja.b;
}

float B::calcquot(const A & obja)
{
	return (float)obja.a/obja.b;
}

void main()
{
	clrscr();
	A obja;
	obja.accept();
	B objb;
	cout<<"Sum is "<<objb.calcsum(obja)<<endl;
	cout<<"Diff is "<<objb.calcdiff(obja)<<endl;
	cout<<"Prdt is "<<objb.calcprdt(obja)<<endl;
	cout<<"Quot is "<<objb.calcquot(obja)<<endl;
	getch();
}


/*Define a class "Number" with 2 data members to store 2 int nos.
Write a friend function to calculate the mean of these 2 nos.*/

#include<iostream.h>
#include<conio.h>

class Number
{
	int a,b;

	public:
		void accept();
		void display();
		friend float mean(const Number &);
};

void Number::accept()
{
	cout<<"Enter 2 numbers:- ";
	cin>>a>>b;
}

void Number::display()
{
	cout<<"a= "<<a<<" ,and b= "<<b<<endl;
}

float mean(const Number & obj)
{
	return (float)(obj.a+obj.b)/2;
}

void main()
{
	clrscr();
	Number obj;
	obj.accept();
	cout<<"Mean of given 2 numbers is "<<mean(obj);
	getch();
}
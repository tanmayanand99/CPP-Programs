/*Sample of p35 but not using friend function*/

#include<iostream.h>
#include<conio.h>

class Mean
{
	int a,b;

	public:
		void accept();
		float display();
};

void Mean::accept()
{
	cout<<"Enter 2 numbers to calculate mean:- ";
	cin>>a>>b;
}

float Mean::display()
{
	float mean= (float)(a+b)/2;
	return mean;
}
void main()
{
	clrscr();
	Mean m;
	m.accept();
	cout<<"Mean of 2 numbers is "<<m.display();
	getch();
}

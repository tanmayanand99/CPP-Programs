/*define a class "circle" and create a few circles and display their data
i.e. radius. At the end, display no. of circles created.*/

#include<iostream.h>
#include<conio.h>

class Circle
{
	int r;
	static int cntr;

	public:
	void accept();
	static int getcntr();
};

//compulsory
       int Circle::cntr;  	//=0 is optional
				//because stati members are auto
				//initialised to 0.
       void Circle::accept()
       {
		cout<<"Enter radius of circle:- ";
		cin>>r;
		cntr++;
       }

       int Circle::getcntr()
       {
		return cntr;
       }

void main()
{
	clrscr();
	Circle c1,c2,c3;
	c1.accept();
	c2.accept();
	c3.accept();
	cout<<"No. of circles are:- "<<Circle::getcntr()<<endl;
	cout<<"No. of circles are:- "<<c1.getcntr();
	getch();
}
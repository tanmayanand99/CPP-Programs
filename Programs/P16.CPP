//write a function which accepts radius of circle from main()
//and calculates its diameter,area and circumference.print result from
//main()

#include<iostream.h>
#include<conio.h>

void calc(const int &,int &,float &,float &);	//fn decln

void main()
{
	int r,d;
	float ac,cc;
	clrscr();
	cout<<"Enter radius of circle:- ";
	cin>>r;
	calc(r,d,ac,cc);
	cout<<"Radius of circle is "<<r<<endl;
	cout<<"Diameter of circle is "<<d<<endl;
	cout<<"Area of circle is "<<ac<<endl;
	cout<<"Circumference of circle is "<<cc<<endl;
	getch();
}

void calc(const int & r,int & d,float & ac, float & cc)
{
	d=2*r;
	ac=3.14*r*r;
	cc=2*3.14*r;
}

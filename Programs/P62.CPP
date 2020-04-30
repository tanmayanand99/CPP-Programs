/*Define a class "Point" with 2 data members, x and y. Create 2 Point objects
p1(100,200) and p2(300,400). Create 2 more point objects p3 and p4
such that they are at 50 units away from source points*/
//p3=++p4	&	p4=p2++

#include<iostream.h>
#include<conio.h>

class Point
{
	int x,y;

	public:
		void accept();
		void display();
		Point operator ++();	//pre increment
		Point operator ++(int);	//post increment
					//dummy int argument used
};

void Point::accept()
{
	cout<<"Enter x and y coordinates of point:- ";
	cin>>x>>y;
}

void Point::display()
{
	cout<<"x= "<<x<<" ,y= "<<y<<endl;
}

Point Point::operator ++()
{
	/*
	Point p; 	//long method
	x+=50;
	y+=50;
	p.x=x;
	p.y=y;
	return p;
	*/
	//short and best method
	x+=50;       	//this is ptr to implicit object
	y+=50;          //*this refers to implicit object bcoz *
	return *this;   //refers to value at address operator
}

Point Point::operator ++(int a)
{
	/*
	Point p;     //long method
	p.x=x;
	p.y=y;
	x+=50;
	y+=50;
	return p;
	*/
	//short and best method
	Point p;
	p=*this;
	++ *this;
	return p;
}

void main()
{
	Point p1,p2,p3,p4;
	clrscr();
	p1.accept();
	p2.accept();
	cout<<"Before ++(),p1 is ";
	p1.display();
	cout<<"Before ++(),p2 is ";
	p2.display();
	p3=++p1;	//p3=p1.operator ++();
	p4=p2++;	//p4=p2.operator ++(5);
	cout<<"After ++(),p1 is ";
	p1.display();
	cout<<"p3 is ";
	p3.display();
	cout<<"After ++(),p2 is ";
	p2.display();
	cout<<"p4 is ";
	p4.display();
	getch();
}

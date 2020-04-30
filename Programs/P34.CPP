/*define a class "Point: with 2 data members which define the position
of a point in a cartesian frame*/
/*Write a function to calculate distance between any 2 points*/
/*Logic-Here to calculate the distance between 2 points,
we need to access x and y data members of both objects simultaneously.
However this cannot be achieved using a member fn because emeber fn are
called using object reference and they can refer to data member of
single object only at any given point of time. So here, we will use
a friend fn to bridge this gap*/

#include<iostream.h>
#include<conio.h>
#include<math.h>

class Point
{
	int x,y;

	public:
		void accept();
		void display();
		friend float getDist(Point,Point);
};

void Point::accept()
{
	cin>>x>>y;
}

void Point::display()
{
	cout<<"x= "<<x<<", y= "<<y<<endl;
}

float getDist(Point p1,Point p2)
{
	float distx=p1.x-p2.x;
	float disty=p1.y-p2.y;
	float dist=sqrt(pow(distx,2)+pow(disty,2));
	return dist;
}

void main()
{
	clrscr();
	Point p1,p2;
	cout<<"Enter point p1:- ";
	p1.accept();
	cout<<"Enter point p2:- ";
	p2.accept();
	cout<<"p1 is ";
	p1.display();
	cout<<"p2 is ";
	p2.display();
	cout<<"Distance between 2 points is "<<getDist(p1,p2);
	getch();
}
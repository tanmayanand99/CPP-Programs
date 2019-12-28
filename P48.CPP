/*eg-2 of inline fn*/

#include<iostream.h>
#include<conio.h>

class Point
{
	int x,y;

	public:
		//inside fn are inline by default
		void accept()
		{
			cout<<"Enter the coordinates of point:- ";
			cin>>x>>y;
		}

		inline void display();	//outside fn are not inline
					//by default
};

inline void Point::display()
{
	cout<<"x= "<<x<<",y= "<<y;
}

void main()
{
	clrscr();
	Point p;
	p.accept();
	p.display();
	getch();
}
/*define a class "Shape" to manage 2D shapes. Write a fn "getArea()"
to return area of any given shape*/

#include<iostream.h>
#include<conio.h>

class Shape
{
	static const float PI;
	public:
		int getArea(int);	//ar of sq
		float getArea(float);	//ar of circle
		int getArea(int,int);	//ar of rect
		float getArea(float,int);	//ar of cylinder
};

	const float Shape::PI=3.14;     //decln of static member is compulsory

int Shape::getArea(int s)
{
	return s*s;
}

float Shape::getArea(float r)
{
	return PI*r*r;
}

int Shape::getArea(int l,int b)
{
	return l*b;
}

float Shape::getArea(float r,int h)
{
	return 2*PI*r*h;
}

void main()
{
	clrscr();
	Shape obj;
	cout<<"Area of square with side=10 is "<<obj.getArea(10)<<endl;
	cout<<"Area of circle with radius=10 is "<<obj.getArea(10.0F)<<endl;
	cout<<"Area of rectangle with l=10 and b=20 is " <<
	obj.getArea(10,20)<<endl;
	cout<<"Area of cylinder with r=10 and h=20 is "<<
	obj.getArea(10.0F,20)<<endl;
	getch();
}



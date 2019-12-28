/* an example of pure virtual fn(). Define a class "Shape" to manage 2D
shapes. Use constructor to accept dat for members and fn to calculate area
of any given shape*/


#include<iostream.h>
#include<conio.h>


class Shape
{

	protected:
		//so that they are accesible to derived classes only
		int dim1,dim2;
	public:
		Shape(int,int);
		virtual float area()=0;	//pure virtual function
};

class Rectangle:public Shape
{
	public:
		Rectangle(int,int);
		float area();
};

class Triangle:public Shape
{
	public:
		Triangle(int,int);
		float area();
};

Shape::Shape(int x,int y)
{
	dim1=x;
	dim2=y;
}

//no defn for pure virtual fn

Rectangle::Rectangle(int x, int y):Shape(x,y)
{
}

float Rectangle::area()
{
	return (dim1*dim2);
}

Triangle::Triangle(int x,int y):Shape(x,y)
{
}

float Triangle::area()
{
	return 0.5*dim1*dim2;
}

void main()
{
	clrscr();
	//Shape s;
	//error, abstracct class cannot be initiated
	Shape *ptr_s;	//base class ptr, OK

	ptr_s=new Rectangle(20,10);
	cout<<"Area of Rectangle is "
	<<ptr_s->area()<<endl;

	ptr_s=new Triangle(9,5);
	cout<<"Area of triangle is "
	<<ptr_s->area()<<endl;

	getch();
}
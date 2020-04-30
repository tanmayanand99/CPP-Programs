/*define a class "FLOAT" with single data member of type float.
Overload the operators + - * / as friend functions to return the sum,
difference, product and quotient of 2 FLOAT objects*/

#include<iostream.h>
#include<conio.h>

class FLOAT
{
	float no1;

	public:
		FLOAT(float n1=0);
		friend FLOAT operator +(FLOAT &,FLOAT &);
		friend FLOAT operator -(FLOAT &,FLOAT &);
		friend FLOAT operator *(FLOAT &,FLOAT &);
		friend FLOAT operator /(FLOAT &,FLOAT &);
		void display();
};

FLOAT::FLOAT(float n1)
{
	no1=n1;
}

FLOAT operator +(FLOAT & f1,FLOAT & f2)
{
	FLOAT f;
	f.no1=f1.no1+f2.no1;
	return f.no1;
}
FLOAT operator -(FLOAT & f1,FLOAT & f2)
{
	FLOAT f;
	f.no1=f1.no1-f2.no1;
	return f.no1;
}
FLOAT operator *(FLOAT & f1,FLOAT & f2)
{
	FLOAT f;
	f.no1=f1.no1*f2.no1;
	return f.no1;
}
FLOAT operator /(FLOAT & f1,FLOAT & f2)
{
	FLOAT f;
	f.no1=f1.no1/f2.no1;
	return f.no1;
}




void FLOAT::display()
{
	cout<<no1<<endl;
}

void main()
{
	clrscr();
	float n1,n2;
	cout<<"Enter 2 nos:";
	cin>>n1>>n2;

	FLOAT f1(n1),f2(n2),fs,fd,fp,fq;

	fs=f1+f2;
	fd=f1-f2;
	fp=f1*f2;
	fq=f1/f2;

	cout<<"f1 contains ";
	f1.display();
	cout<<"f2 contains ";
	f2.display();
	cout<<"Sum is ";
	fs.display();
	cout<<"Difference is ";
	fd.display();
	cout<<"Product is ";
	fp.display();
	cout<<"Quotient is ";
	fq.display();
	getch();
}
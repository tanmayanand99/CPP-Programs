//an eg. of union

#include<iostream.h>
#include<conio.h>

union sample
{
	int i;
	char ch;
	float f;
};

void main()
{
	sample u;
	clrscr();
	u.ch='m';
	cout<<"ch contains "<<u.ch<<endl;
	u.i=12345;
	cout<<"i contains "<<u.i<<endl;
	u.f==12345.78;
	cout<<"f contains "<<u.f<<endl;
	cout<<"ch contains "<<u.ch<<endl;
	cout<<"size of union is "<<sizeof(sample);
	getch();
}
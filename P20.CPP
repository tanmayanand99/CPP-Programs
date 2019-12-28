//an eg. of ref to a ptr var

#include<iostream.h>
#include<conio.h>

void main()
{
	char *p="Hello";
	char * & q=p;
	clrscr();
	cout<<"p contains "<<(unsigned int)p<<endl;
	cout<<"q contains "<<(unsigned int)q<<endl;
	cout<<"p points to "<<p<<" and q points to "<<q<<endl;
	cout<<"Address of p is "<<(unsigned int)&p<<" and q is "<<
	(unsigned int)&q<<endl;
	q="HI";
	cout<<"After changes, "<<endl;
	cout<<"p contains "<<(unsigned int)p<<endl;
	cout<<"q contains "<<(unsigned int)q<<endl;
	cout<<"p points to "<<p<<" and q points to "<<q<<endl;
	cout<<"Address of p is "<<(unsigned int)&p<<" and q is "<<
	(unsigned int)&q<<endl;
	getch();
}

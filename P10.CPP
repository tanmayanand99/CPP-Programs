//an eg. of anonymous union

#include<iostream.h>
#include<conio.h>

struct book
{
	int id;
	char title[15],author[20];
	union
	{
		int rs;
		float dollars;
	};
};

void main()
{
	book b1={123,"C language","Y Kanetkar"},
	     b2={124,"C++","Stroustrup B"};
	b1.rs=650;
	b2.dollars=12.35;
	clrscr();
	cout<<"b1 contains "<<b1.id<<", "<<b1.title<<", "<<b1.author
	<<", "<<b1.rs<<endl;
	cout<<"b2 contains "<<b2.id<<", "<<b2.title<<", "<<b2.author
	<<", "<<b2.dollars<<endl;
	getch();
}

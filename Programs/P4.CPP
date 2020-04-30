//eg. of typecasting 1

#include<iostream.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	cout<<"Enter a character :- ";
	ch=getche();	//echo the char
	ch++;
	cout<<"\nch is "<<ch<<endl;
	cout<<"ASCII code of ch is "<<int(ch)<<endl;	//CPP style
	cout<<"ASCII code of ch is "<<(int)ch;		//C style
	getch();
}
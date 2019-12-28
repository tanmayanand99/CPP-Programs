/*Design a class with given outlines*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

class String
{
	char str[30];

	public: //overloaded operator fns as member fns
		String operator =(String);	//assign 1 string to another
		String operator +(String); 	//concantenating 2 strings
		int operator ==(String);	//comparing 2 strings
		String operator -();            //unary operator to rev str
		friend ostream & operator<<(ostream &, const String &);
		friend istream & operator>>(istream &,String &);
};


String String::operator =(String objs)
{
	strcpy(str,objs.str);
	return *this;
}

String String::operator +(String objs)
{
	String s;
	strcpy(s.str,str);
	strcat(s.str,objs.str);
	return s;
}

int String::operator ==(String objs)
{
	if(strcmp(str,objs.str)==0)
		return 1;

	return 0;
}

String String::operator -()
{
	strrev(str);
	return *this;
}

ostream & operator <<(ostream & out,const String & objs)
{
	out<<objs.str;
	return out;
}

istream & operator >> (istream & in,String & objs)
{
	in>>objs.str;
	return in;
}

void main()
{
	String s1,s2,s3;
	int choice;

	while(1)
	{
		clrscr();
		cout<<"Operations on strings"<<endl;
		cout<<"1.Copy a string"<<endl;
		cout<<"2.Concantenate 2 strings"<<endl;
		cout<<"3.Compare 2 strings"<<endl;
		cout<<"4.Reverse a string"<<endl;
		cout<<"5.Exit"<<endl;

		cout<<"Enter your choice:- ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter a string:- ";
				cin>>s1;
				s2=s1;
				cout<<"Source is "<<s1
				<<", Target is "<<s2;
				break;
			case 2:
				cout<<"Enter string 1:- ";
				cin>>s1;
				cout<<"Enter string 2:- ";
				cin>>s2;
				s3=s1+s2;
				cout<<"Concantenated string is "<<s3;
				break;
			case 3:
				cout<<"Enter string 1:- ";
				cin>>s1;
				cout<<"Enter string 2:- ";
				cin>>s2;
				if(s1==s2)
					cout<<"Strings are same";
				else
					cout<<"Strings are not same";
				break;

			case 4:
				cout<<"Enter a string:- ";
				cin>>s1;
				-s1;
				cout<<"Reverse of string is "<<s1;
				break;
			case 5:
				exit(0);
			default:
				cout<<"Error in choice, try again";
		}
		getch();
	}
}
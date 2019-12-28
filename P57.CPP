/*Create a Class string using outlines given below*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class String
{
	char *str; 	//ptr to a string

	public:
		String();
		String(char,int);     //paramerarised constructor
				      //to replicate a char
				      //given no. of times
		String(char *);	      //dynamuc constructor
		String(String &);     //copy constructor
		~String();	      //destructor
		void display();
};

String::String()
{
	str=="";       //initialise to an empty string
}

String::String(char ch,int i)
{
	//allocate memory for data members str
	str=new char[i+1];
	for(int j=0;j<i;j++)
		str[j]=ch;

	str[j]='\0';
}

String::String(char *s)
{
	int len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
}

String::String(String & objs)
{
	int len=strlen(objs.str);
	str=new char[len+1];
	strcpy(str,objs.str);
}

String::~String()
{
	delete []str;
}

void String::display()
{
	cout<<"String contains "<<str<<endl;
}

void main()
{
	clrscr();
	String s1,s2('m',5),s3("Hello Everybody"),s4(s3);
	cout<<"s1 contains ";
	s1.display();
	cout<<"s2 contains ";
	s2.display();
	cout<<"s3 contains ";
	s3.display();
	cout<<"s4 contains ";
	s4.display();
	getch();
}


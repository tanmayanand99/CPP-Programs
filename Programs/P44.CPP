/*define a overloaded fn "concat()" for 2 strings and 1 string and 1 int
but using uitoa which is a user defined fn*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void concat(char [],char [],char[]);   //this fn doesnt return the
				       //concantentenated string because
				       //array are passed as a reference
void concat(char [],int,char[]);
void uitoa(int,char []);

void main()
{
	char s1[10],s2[10],s3[20],s4[10],s5[20];
	int no;
	clrscr();
	cout<<"Enter string 1:- ";
	cin>>s1;
	cout<<"Enter string 2:- ";
	cin>>s2;
	concat(s1,s2,s3);
	cout<<"Concantion s1 and s2 is "<<s3<<endl;
	cout<<"Enter string 4:- ";
	cin>>s4;
	cout<<"Enter a number:- ";
	cin>>no;
	concat(s4,no,s5);
	cout<<"Concantenation of s4 and no. is "<<s5<<endl;
	getch();
}

void concat(char s1[],char s2[],char s3[])
{
	int i,j;	//i to move in source string and j in target string
	for(i=0,j=0;s1[i]!='\0';i++,j++)
		s3[j]=s1[i];
	for(i=0;s2[i]!='\0';i++,j++)
		s3[j]=s2[i];
	s3[j]='\0';	//close target string
}

void concat(char s4[],int no,char s5[])
{
	int i,j;
	char s[7];
	for(i=0,j=0;s4[i]!='\0';i++,j++)
		s5[j]=s4[i];
	//convert integer into arguments which are generally string
	uitoa(no,s); 	//last parameter us base which can be
			//2-binart,10-decimal,8-octal,16-hexa
	for(i=0;s[i]!='\0';i++,j++)
		s5[j]=s[i];
	s5[j]='\0';
}

void uitoa(int no,char s[])
{
	int revno=0;
	//create revno first
	while(no!=0)
	{
		revno=revno*10+no%10;
		no/=10;
	}
	//store each digit in s[]
	int i=0;
	while(revno!=0)
	{
		s[i]=revno%10+48;
		i++;
		revno/=10;
	}
	s[i]='\0';
}

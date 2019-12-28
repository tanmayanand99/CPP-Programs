/*Accept the source and target filename from user and copy contents from
source to target file. While copying, convert lower case letters to upper case
and vice versa, digits to 9 and speical characters to $*/

#include<fstream.h>
#include<conio.h>


void main()
{
	char src[20],tgt[20],ch;
	clrscr();
	cout<<"Enter source filename:- ";
	cin>>src;
	ifstream fin(src);

	if(!fin)
	{
		cout<<"Error, source file "<<src<<" doesnt exist";
		getch();
		return;
	}

	cout<<"Enter target filename:- ";
	cin>>tgt;

	ofstream fout(tgt);

	while(!fin.eof())
	{
		fin.get(ch);
		if(ch=='\n')
		{
		}
		else if(ch>=65 && ch<=90)
		{
			ch+=32;
		}
		else if(ch>=97 && ch<=122)
		{
			ch-=32;
		}
		else if(ch>=48 && ch<=57)
		{
			ch='9';
		}
		else
			ch='$';

		fout.put(ch);
	}
	fin.close();
	fout.close();
	cout<<"File contents copied successfully";
	getch();
}


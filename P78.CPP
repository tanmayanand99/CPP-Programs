/*accept a filename from user and display its contents*/

#include<fstream.h>
#include<conio.h>

void main()
{
	char fn[20],ch;
	clrscr();
	cout<<"Enter the filename to read:- ";
	cin>>fn;
	ifstream fin;
	fin.open(fn,ios::in);	//2nd parameter is optional
	//validation-input stream can be created only from existing
	//files
	if(fin.fail())	//true
	{
		cout<<"Error, file "<<fn<<" doesnt exist";
		getch();
		return;
	}
	//read char by char from file
	while(!fin.eof())	//do this till eof is not reached
	{
		fin.get(ch);
		//get() reads the current character and loads it in var
		//ch;
		cout<<ch;
	}
	fin.close();
	getch();
}

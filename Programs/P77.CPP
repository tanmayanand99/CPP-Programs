/*Write a program to write/store basic data types to a file and retrieve
them later using insertion and extraction operator*/

#include<fstream.h>
#include<conio.h>

void main()
{
	clrscr();
	char ch1='m',ch2;
	int i1=12345,i2;
	float f1=123.45,f2;
	ofstream fout("test.txt",ios::out);
		//2nd argument is optional
	fout<<ch1<<endl<<i1<<endl<<f1;
	fout.close();
	cout<<"Data to file test.txt written sucessfully"<<endl;
	ifstream fin("test.txt",ios::in);
	fin>>ch2>>i2>>f2;
	fin.close();
	cout<<"ch2 contains "<<ch2<<endl;
	cout<<"i2 contains "<<i2<<endl;
	cout<<"f2 contains "<<f2<<endl;
	getch();
}
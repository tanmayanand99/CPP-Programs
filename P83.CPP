/*WAP to write/store basic data types to file and retrieve them later
using binary mode*/

#include<fstream.h>
#include<conio.h>

void main()
{
	clrscr();
	char ch1='m',ch2;
	int i1=12345,i2;
	float f1=3.14,f2;

	ofstream fout("test.dat",ios::binary|ios::out);

	//2nd arg is optional and first arg is compulsory i.e. ios::binary
	//bcoz default mode is ios::text

	fout.write((char *)&ch1,sizeof(ch1));
	fout.write((char *)&i1,sizeof(i1));
	fout.write((char *)&f1,sizeof(f2));
	fout.close();
	cout<<"Data to test.dat written successfully"<<endl;

	ifstream fin("test.dat",ios::binary|ios::in);

	fin.read((char *)&ch2,sizeof(ch2));
	fin.read((char *)&i2,sizeof(i2));
	fin.read((char *)&f2,sizeof(f2));

	fin.close();
	cout<<"ch2 contains "<<ch2<<endl;
	cout<<"i2 contains "<<i2<<endl;
	cout<<"f2 contains "<<f2<<endl;
	getch();
}
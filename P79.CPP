/*accept the source and target filename from user and copy the contents
of source into target*/

#include<fstream.h>
#include<conio.h>

void main()
{
	char src[20],tgt[20],ch;
	clrscr();
	cout<<"Enter source filename:- ";
	cin>>src;
	ifstream fin(src);

	if(!fin)	//same as if(fin.fail()) or if(!fin.good())
	{
		cout<<"Error, source file "<<src<<" not found.";
		getch();
		return;
	}
	cout<<"Enter target filename:- ";
	cin>>tgt;
	ofstream fout(tgt);	//2nd operator is optional ios::out
	/*validation not required because even if tgt doesnt exist, it
	gets created. However, if it exists, it gets overwritten.
	To avoid overwriting, specify 2nd parameter ios::app*/
	while(!fin.eof())
	{
		fin.get(ch);
		fout.put(ch);
	}
	fin.close();
	fout.close();
	cout<<"File contents copied successfully";
	getch();
}

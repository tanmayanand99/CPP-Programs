/*Accept a filename from user and display alternate lines*/

#include<fstream.h>
#include<conio.h>

void main()
{
	char fn[20],str[80];
	int lineno=1;
	clrscr();
	cout<<"Enter filename:- ";
	cin>>fn;
	ifstream fin(fn);
	if(!fin)
	{
		cout<<"Error,file "<<fn<<" not found.";
		getch();
		return;
	}

	while(!fin.eof())
	{
		//read contents line by line
		fin.getline(str,sizeof(str));

		if(lineno%2!=0)
			cout<<str<<endl;

		lineno++;
	}
	fin.close();
	getch();
}
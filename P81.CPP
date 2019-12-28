/*accept a filename from user and display alternate characters from each
line*/

#include<fstream.h>
#include<conio.h>

void main()
{
	char fn[20],str[80];
	int i;
	clrscr();
	cout<<"Enter filename:- ";
	cin>>fn;
	ifstream fin(fn);
	if(!fin)
	{
		cout<<"Error, file "<<fn<<" doesnt exist";
		getch();
		return;
	}

	while(!fin.eof())
	{
		fin.getline(str,sizeof(str));
		for(i=0;str[i]!='\0';i++)
		{
			if(i%2==0)
				cout<<str[i];
		}
		cout<<endl;
	}
	fin.close();
	getch();
}
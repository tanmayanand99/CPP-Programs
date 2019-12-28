/*an eg. of dynamic arr with elements filled using a loop*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int noe,i,j;
	clrscr();
	cout<<"Enter no. of elements:- ";
	cin>>noe;
	int *nos;
	nos= new int[noe];
	//fill 10,20,30... int nos[]
	for(i=0,j=10;i<noe;i++,j+=10)
		nos[i]=j;
	for(i=0;i<noe;i++)
		cout<<nos[i]<<"  ";
	delete []nos;
	int *ptr;
	ptr=new int[65536];	//no error, as arr is dynamic
	getch();
}

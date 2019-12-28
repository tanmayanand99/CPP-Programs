/*Using copy constructor, display the first n terms of Fibonacci series*/

#include<iostream.h>
#include<conio.h>

class Fibonacci
{
	long unsigned int ct,nt;
	int n;

	public:
		Fibonacci(int no,long unsigned int crr=0,long unsigned int nxt=1);
		Fibonacci(const Fibonacci &);
};

Fibonacci::Fibonacci(int no,long unsigned int crr,long unsigned int nxt)
{
	n=no;
	ct=crr;
	nt=nxt;
}

Fibonacci::Fibonacci(const Fibonacci & objf)
{
	ct=objf.ct;
	nt=objf.nt;
	n=objf.n;
	cout<<ct<<"\t"<<nt<<"\t";

	for(int i=0;i<n;i++)
	{
		nt=nt+ct;
		ct=nt-ct;
		cout<<nt<<"\t";
	}
}


void main()
{
	clrscr();
	int n;
	cout<<"Enter the number of terms:- ";
	cin>>n;
	Fibonacci f1(n),f2(f1);
	getch();
}


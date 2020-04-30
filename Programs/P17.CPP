/*define a finction which accepts two int nos. from main() and calculates
their sum,diff,prdt and quot. print result from main*/

#include<iostream.h>
#include<conio.h>

void calc(const int &,const int &,int &,int &,int &,float &);	//fn decln

void main()
{
	int a,b,sum,diff,prdt;
	float quot;
	clrscr();
	cout<<"Enter 2 numbers:- ";
	cin>>a>>b;
	calc(a,b,sum,diff,prdt,quot);
	cout<<"Sum of nos. is "<<sum<<endl;
	cout<<"Diff of nos. is "<<diff<<endl;
	cout<<"Prod of nos. is "<<prdt<<endl;
	cout<<"Quot of nos. is "<<quot;
	getch();
}

void calc(const int & a,const int & b,int & sum,int & diff,int &prdt, float & quot)
{
	sum=a+b;
	diff=a-b;
	prdt=a*b;
	quot=(float)a/b;
}
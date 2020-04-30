/*to prove that in hybrid inheritance the members of indirect
class are inherited multiple times*/

#include<iostream.h>
#include<conio.h>

class A
{
	int x;
};

class B:public A
{
	int y;
};

class C:public A
{
	int z;
};

class D:public B,public C
{
};

void main()
{
	clrscr();
	cout<<"Size of A is "<<sizeof(A)<<endl;  //2
	cout<<"Size of B is "<<sizeof(B)<<endl;  //2
	cout<<"Size of C is "<<sizeof(C)<<endl;  //4
	cout<<"Size of D is "<<sizeof(D)<<endl;  //8 but 6 expected
	getch();
}

/*write a fn which returns maximum between any 2 given values*/

#include<iostream.h>
#include<conio.h>

template<class T>

T getMax(T a,T b)
{
	return a>b?a:b;
}
void main()
{
	clrscr();
	cout<<"Max between chars 'm' and 'p' are "<<getMax('m','p')<<endl;
	cout<<"Max between 10 and 20 is "<<getMax(10,20);
	getch();
}

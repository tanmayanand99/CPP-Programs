/*write a fn which return sum of any 2 given numbers*/

#include<iostream.h>
#include<conio.h>

template<class T1,class T2>	//T1 and T2 may be of same or diff data types

T2 getSum(T1 a, T2 b)
{
	return a+b;
}

void main()
{
	clrscr();
	cout<<"Sum of 10 and 20 is "<<getSum(10,20)<<endl;
	cout<<"Sum of 10.75 and 9 is "<<getSum(10.75,9)<<endl;	//19
	cout<<"Sum of 9 and 10.75 is "<<getSum(9,10.75);	//19.75
	getch();
}
/*overloading of one template fn as another template fn. As parameter types
here to a fn are generic, overloading is normally achieved by passing
diff no. of parameters*/

#include<iostream.h>
#include<conio.h>

//overload template fn to return sum of any 2 or 3 values

template<class T>
T getSum(T a,T b)
{
	return a+b;
}

template<class T>
T getSum(T a,T b,T c)
{
	return a+b+c;
}

void main()
{
	clrscr();
	cout<<"Sum of 10 and 20 is "<<getSum(10,20)<<endl;
	cout<<"Sum of 10, 20 and 30 is "<<getSum(10,20,30)<<endl;
	cout<<"Sum of 1.34 and-2.93 is "<<getSum(1.34,-2.93)<<endl;
	getch();
}
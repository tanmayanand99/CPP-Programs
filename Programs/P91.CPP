/*an eg. of overloading of a template fn by a non template fn*/
#include<iostream.h>
#include<conio.h>

template<class T>

void fn(T a,T b)
{
	cout<<"Invocation of template fn"<<endl;
}

void fn(int a,int b)
{
	cout<<"Invocation of normal fn"<<endl;
}

void main()
{
	clrscr();
	fn('m','d'); //template fn bcoz char version of
		     //fn() is not available and will be created by
		     //compiler
	fn(10,20);   //normal fn given 1st preference bcoz if it uses
		     //template fn,int cersion will be created and we
		     //will get compile error
	fn('a',20);  //normal fn bcoz in template fn, both parameters need
		     //need to be of the same type only and promotion or
		     //demotion of types do not take place in template fn
	fn(19.45,18.01);	//template fn bcoz both type are same
				//fn(double,double) gets created
	getch();
}


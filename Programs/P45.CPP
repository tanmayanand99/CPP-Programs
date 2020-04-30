/*am eg of default value in fn decln*/

/*write a fn which returns the sum of 2 or 3 int values*/

#include<iostream.h>
#include<conio.h>

int getSum(int a,int b,int c=0)
{
	return a+b+c;
}

void main()
{
	clrscr();
	cout<<"Sum of 10 and 20 is "<<getSum(10,20)<<endl;
	cout<<"Sum of 10 20 and 30 is "<<getSum(10,20,30)<<endl;
	   /*here, default value of c will get ignored*/
	getch();
}

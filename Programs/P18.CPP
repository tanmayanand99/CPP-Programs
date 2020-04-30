/*to prive that constants cannot have var references but
constant references only*/

#include<iostream.h>
#include<conio.h>

void main()
{
	const int i=10;
	int & j=i;	//j is not ref of i,
			//it simply copies value
			//of i.(it is a diferent var)
	//const int & j=i;	//noe j is ref of i
				//unfortunately int & j=i; does
				//not give error in cpp
	clrscr();
	cout<<"i contains "<<i<<" and j contains "<<j<<endl;
	cout<<"Adr of i is "<<(unsigned int)&i<<" and of j is "
	<<(unsigned int)&j<<endl;
	j++;	//it would give an error if j was const
	cout<<"After incr of ji contains "
	<<i<<" and j contains "<<j<<endl;
	getch();
}

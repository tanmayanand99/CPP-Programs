/*using copy constructor display sum of first n terms of positive odd series*/

#include<iostream.h>
#include<conio.h>

class Sum
{
	int no,sum;

	public:
		Sum(int n,int s=0);
		Sum(const Sum &);

};

Sum::Sum(int n,int s)
{
	no=n;
	sum=s;
}

Sum::Sum(const Sum & objs)
{
	no=objs.no;
	sum=objs.sum;

	for(int i=0,j=1;i<no;i++,j+=2)
		sum+=j;
	cout<<"Sum of first "<<no<<" odd nos. is "<<sum<<endl;
}


void main()
{
	clrscr();
	int no;
	cout<<"Enter the number of terms:- ";
	cin>>no;
	Sum s1(no),s2(s1);
	getch();
}


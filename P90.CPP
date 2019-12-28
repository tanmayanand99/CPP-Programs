/*write a fn to sort data in ascending order*/

#include<iostream.h>
#include<conio.h>

template<class T>

void sort(T data[],int noe)
{
	for(int i=1;i<noe;i++)
	{
		for(int j=0;j<noe-i;j++)
		{
			swap(data[j],data[j+1]);
			//1 generic fn can call other generic fn
		}
	}
}

template<class T>

void swap(T &a,T &b)
{
	T temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
}

template<class T>

void display(T data[],int noe)
{
	for(int i=0;i<noe;i++)
	{
		cout<<data[i]<<"\t";
	}
}

void main()
{
	clrscr();

	int nos[]={10,20,30,40,10,5,50,3};
	cout<<"Before sorting, nos[] contains "<<endl;
	display(nos,8);
	sort(nos,8);
	cout<<"After sorting, nos[] contains "<<endl;
	display(nos,8);

	char c[]={'d','a','t','a','b','y','t','e'};
	cout<<"Before sorting, c[] contains "<<endl;
	display(c,8);
	sort(c,8);
	cout<<"After sorting, c[] contains "<<endl;
	display(c,8);

	getch();
}

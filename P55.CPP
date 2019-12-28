/*define a class Intarr which can hold n int values*/

#include<iostream.h>
#include<conio.h>

class Intarr
{
	int size,*arr;

	public:
		Intarr(int);	//dynamic constructor
		void display();
		~Intarr();	//destructor
};

Intarr::Intarr(int noe)
{
	size=noe;
	arr=new int[size];
	//fill the elements with auto generated nos, 1 2 3 ....
	int no=1;
	for(int i=0;i<size;i++)
	{
		arr[i]=no;
		no+=1;
	}
}

void Intarr::display()
{
	cout<<"Elements of array are:- "<<endl;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"    ";
}

Intarr::~Intarr()
{
	delete []arr;
	cout<<"Destructor invoked";
}

void main()
{
	clrscr();
	int noe;
	cout<<"Enter noe:- ";
	cin>>noe;
	Intarr obj(noe);
	obj.display();
	getch();
}
/*define a class "Media" with data members title, price. Define "Book"
which inherits "Media" and additional data member "no_pages"*/
//Define a class "CD" which inherits "Media" and additional data member
//"size_mb". Accept dat of "n" items and display

#include<iostream.h>
#include<conio.h>
#include<string.h>


class Media
{
	 char title[15];
	 int price;

	 public:
		Media(char [],int);	//constructors cannot be declared
					//virtual
		virtual void display();
};

class Book:public Media
{
	int no_pgs;

	public:
		Book(char [],int,int);
		void display();         //compulsory to override
};

class CD:public Media
{
	int size_mb;

	public:
		CD(char [],int,int);
		void display();
};

Media::Media(char t[], int p)
{
	strcpy(title,t);
	price=p;
}

void Media::display()
{
	cout<<"Title:- "<<title<<", Price:- "<<price<<endl;
}

void Book::Book(char t[],int p,int nop):Media(t,p)
{
	no_pgs=nop;
}

void Book::display()
{
	Media::display();
	cout<<"Type:- Book, No. of pages:- "<<no_pgs<<endl;
}

void CD::CD(char t[],int p,int size):Media(t,p)
{
	size_mb=size;
}

void CD::display()
{
	Media::display();
	cout<<"Type:- CD, Size in MB:- "<<size_mb<<endl;
}

void main()
{
	clrscr();
	int noi;
	cout<<"Enter the number of items:- ";
	cin>>noi;

	Media **arr;
	arr=new Media *[noi];

	char type;
	char title[15];
	int price,nop,size;
	cout<<"Enter your items:- "<<endl;

	for(int i=0;i<noi;i++)
	{
		cout<<"Enter c/C for CD and b/B for book:- "<<endl;
		cin>>type;
		cout<<"Enter title and price:- ";
		cin>>title>>price;

		if(type=='b' || type=='B')
		{
			cout<<"Enter no. of pages:- ";
			cin>>nop;
			arr[i]=new Book(title,price,nop);
		}

		else
		{
			cout<<"Enter the size in MB:- ";
			cin>>size;
			arr[i]=new CD(title,price,size);
		}
	}

	cout<<"Data of n items in consignment are:- "<<endl;
	for(i=0;i<noi;i++)
		arr[i]->display();
	delete []arr;
	getch();
}

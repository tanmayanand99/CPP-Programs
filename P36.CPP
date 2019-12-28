/*design a class Item with 2 data members name and price/rate.
Accept the data of n items and display them in descending order by rate.
If rate is same then arrange in ascending order by name*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Item
{
	int rate;
	char name[15];

	public:
		void accept();
		void display();
		friend void sort(Item *,int);
};

void Item::accept()
{
	cout<<"Enter item name and rate:- ";
	cin>>name>>rate;
}

void Item::display()
{
	cout<<name<<"\t"<<rate<<endl;
}

void sort(Item *ptr,int noe)
{
	Item temp;	//for swapping object
	for(int i=1;i<noe;i++)
	{
		for(int j=0;j<noe-i;j++)
		{
			if(ptr[j].rate<ptr[j+1].rate)
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
			else if(ptr[j].rate==ptr[j+1].rate)
			{
				//compare strings i.e. name
				if(stricmp(ptr[j].name,ptr[j].name)>0)
				{
					temp=ptr[j];
					ptr[j]=ptr[j+1];
					ptr[j+1]=temp;
				}
			}
		}
	}
}

void main()
{
	clrscr();
	int noe;
	cout<<"Enter the number of items:- ";
	cin>>noe;
	Item *ptr;
	ptr=new Item[noe];
	cout<<"Enter the items:-"<<endl;
	for(int i=0;i<noe;i++)
		ptr[i].accept();
	cout<<"Before sorting,array is:- "<<endl;
	for(i=0;i<noe;i++)
		ptr[i].display();
	sort(ptr,noe);
	cout<<"After sorting,array is:- "<<endl;
	for(i=0;i<noe;i++)
		ptr[i].display();
	delete []ptr;
	getch();
}




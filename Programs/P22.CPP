/*an eg of static memory allocation.
here, the memory is allocated at compile time.
hence, program runs faster but in case of array,
lot of memory may get wasted*/

#include<iostream.h>
#include<conio.h>
#define SIZE 50

void main()
{
	int nos1[SIZE];
	const int MAX=50;
	int nos2[MAX];
	int NOE;
	cout<<"Enter no. of elements:- ";
	cin>>NOE;
	//int nos3[NOE];	//error,size of arr has to be a const
	int nos4[32767];	//OK
	//int nos5[32768];	//error,limitation of 65535 bytes
				//for static arrays in 16 bit compilers
				//(2^16)
	char name[65535];		//OK
	//char name[65536];		//error,array size is too large
}


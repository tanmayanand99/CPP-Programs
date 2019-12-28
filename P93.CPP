/*design a class "stack" to manage data of any type*/

#include<iostream.h>
#include<conio.h>
#define SIZE 5

template<class T>

class Stack
{
	T data[SIZE];
	int top;

	public:
		Stack();
		void push(T);
		T pop();
		int isfull();
		int isempty();
};


template<class T>
Stack<T>::Stack()
{
	top=-1;	       //stack is initialised
}

template<class T>

void Stack<T>::push(T e1)
{
	top++;
	data[top]=e1;
}

template<class T>

T Stack<T>::pop()
{
	return data[top--];
}

template<class T>

int Stack<T>::isempty()
{
	if(top==-1)
		return 1;
	return 0;
}

template<class T>

int Stack<T>::isfull()
{
	if(top==SIZE-1)
		return 1;
	return 0;
}

void main()
{
	clrscr();
	/*create a stack to hold the int values like 10,20,30..*/
	Stack<int> s;
	int i,no=10;
	//push nos until stack is full
	for(i=0;i<10;i++)
	{
		if(s.isfull())
		{
			cout<<"Stack Overflow"<<endl;
			break; //if you dont wanna print Stack Overflow
			       //5 times
		}
		else
		{
			s.push(no);
			cout<<"Element "<< no <<" pushed successfully"<<endl;
			no+=10;
		}
	}

	for(i=0;i<10;i++)
	{
		if(s.isempty())
		{
			cout<<"Stack Underflow"<<endl;
			break;
		}
		else
			cout<<"Element popped is "<<s.pop()<<endl;
	}
	getch();
}


/* An eg of user defined type exception. Design a stack to hold
5 int values. Throw exceptions "Stackfull" and "StackEmpty" for 
respective conditions 
*/

#include<iostream>
using namespace std;
#define SIZE 5

class StackFull{};
class StackEmpty{};

class Stack 
{
    int data[SIZE];

    public:
        int top;
        Stack();
        void push(int);
        int pop();
};

Stack::Stack()
{
    top = -1;
}

void Stack::push(int el)
{
    top++;
    data[top] = el;
}

int Stack::pop()
{
    return data[top--];
}

int main()
{
    Stack s;
    //push 10,20,30...

    int i,no=0;

    for(i=0;i<10;i++)
    {
        try
        {
            if(s.top==SIZE-1)
                throw StackFull();
            else
            {
                s.push(no);
                cout<<"Element "<<no<<" pushed in stack successfull"<<endl;
                no+=10;
            }
        }
        catch(StackFull)
        {
            cout<<"Stack is full"<<endl;
        }
    }
    for(int i=0;i<10;i++)
    {
        try
        {
            if(s.top == -1)
                throw StackEmpty();
            cout<<"Element popped is:- "<<s.pop()<<endl;
        }
        catch(StackEmpty)
        {
            cout<<"Stack is empty"<<endl;
            break;
        }
    }
    return 0;
}
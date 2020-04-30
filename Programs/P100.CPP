//an eg. of generic exception handler

#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        try
        {
            if(i==1)
                throw 1;    //int exception
            if(i==3)
                throw 'v';  //char exception
            if(i==5)
                throw 2.6;  //double exception
            cout<<"No exception generated for i = "<<i<<endl;
        }
        catch(double no)
        {
            cout<<"Exception raised because i=5"<<endl;
        }
        catch(...)
        {
            cout<<"Exception raised because i=1 or i=3"<<endl;
        }
    }
    cout<<"Prcoessing of main() continues"<<endl;
    return 0;
}
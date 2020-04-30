//an eg. of nested try block

#include<iostream>
using namespace std;

int main()
{
    int numer = 12, denom[] = {2,0,3,0,6};

    //outer try
    try
    {
        for(int i=0;i<10;i++)
        {
            //inner try
            try
            {
                if(denom[i]==0)
                    throw 7;    //int exception

                if (i>=5)
                    throw 'm'; //char exception
                cout<<numer<<"/"<<denom[i]<<" = "<<numer/denom[i]<<endl;
            }
            catch(int x)
            {
                cout<<"Division by 0 not possible";
            }
        }
    }
    catch(char x)
    {
        cout<<"Index out of array range"<<endl;
    }
    cout<<"Processing of main() continues"<<endl;
    return 0;
}
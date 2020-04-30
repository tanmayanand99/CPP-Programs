//an eg. of multiple catchblocks

#include<iostream>
using namespace std;

int main()
{
    int numer = 12, denom[] = {2,0,3,0,6};

    for(int i=0;i<10;i++)
    {
        try
        {
            if(denom[i]==0)
                throw 7;    //int exception
            if(i>=5)
                throw 'm';  //char exception
            cout<<numer<<"/"<<denom[i]<<" = "<<numer/denom[i]<<endl;        
        }
        catch(int x)
        {
            cout<<"Division by 0 not possible"<<endl;
        }
        catch(char x)
        {
            cout<<"Index out of array range"<<endl;
            break;  //loop terminates
        }
    }
    cout<<"Processing of main() continues"<<endl;
    return 0;
}
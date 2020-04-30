/* an eg. of exception handling in which user defined function throws 
an exception and main() handles it*/

#include<iostream>
using namespace std;

double divn(int numer, int denom)
{
    if(denom == 0)
        throw denom;    //throwing an int
    return (double)numer/denom;
}

int main()
{
    int numer,denom;
    cout<<"Enter numer and denom:- ";
    cin>>numer>>denom;

    try
    {
        cout<<"Result of division is "<<divn(numer,denom)<<endl;
    }
    catch(int x)
    {
        cout<<"Division by 0 is not possible"<<endl;
    }
    cout<<"Processing of main() continues"<<endl;
    return 0;
    
}
//an example of exception handling

#include<iostream>
using namespace std;

int main()
{
    int numer = 12, denom = 0, result;
    try
    {
        if(denom == 0)
            throw denom;    //throwing int exception
        result = numer/denom;
    }
    catch(int x)
    {
        cout<<"Division by 0 not possible"<<endl;
    }
    cout<<"Processing of main() continues"<<endl;
    return 0;
}


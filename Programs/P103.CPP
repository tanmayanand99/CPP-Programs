//to define namespaces in CPP program

#include<iostream>
using namespace std;

namespace sample1
{
    int a;
    int getvalue()
    {
        return a;
    }
}

namespace sample2
{
    int a;
}

using namespace sample2
{
    //b=30;
    // error, local varialble and memory is not allocated to it

    a=10;   //sample2
    sample1::a = 20;
    cout<<"a of sample1 is "<<sample1::a<<endl;
    cout<<"a of sample2 is "<<a<<endl;
    cout<<"getvalue() returns "<<sample1::getvalue();
};

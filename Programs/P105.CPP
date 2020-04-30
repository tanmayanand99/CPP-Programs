#include<iostream>
#include "Mylib2.H"
#include "Mylib3.H"

using namespace std;

/* using is not any use because Math is ambiguous. Also if same name is assigned
to multiple namespaces they merge into a single namespace */

//using namesapce a;
//using namesapce b;

int main()
{
    cout<<"Addition of 5 and 12 is "<<a::Math::getSum(12,5)<<endl;
    cout<<"Subtraction of 12 and 5 is "<<b::Math::getDiff(12,5)<<endl;
    return 0;
}
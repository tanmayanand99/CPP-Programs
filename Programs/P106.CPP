//an eg. og alias of namespace

#include<iostream>
#include "Mylib4.H"
using namespace std;

int main()
{
    namespace oi = a::b;
    oi::no = 10;
    cout<<"Value in var no is"<<oi::no<<endl;
}
/* an eg. of class defined in a namespace and included in a header file */

#include<iostream>  //absolute path
#include "Mylib.h" //relative path

using namespace std;
using namespace a;

int main()
{
    /* as fn getwish() is not static, we require an object of class
    wish to run the fn wish obj */
    wish obj;
    cout<<"Wish from fn is "<<obj.getwish()<<endl;
}

//accept 5 nos. from user and display their square roots

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter a +ve whole number:- ";
        cin>>no;

        try
        {
            if(no<0)
                throw "Square root of a -ve numbrer cannot be calculated";
            cout<<"Square root of "<<no<<" is "<<sqrt(double(no))<<endl;
        }
        catch(char *msg)
        {
            cout<<msg<<endl;
            i--;    
        }
    }
    return 0;
}
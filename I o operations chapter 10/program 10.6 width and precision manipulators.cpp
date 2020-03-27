#include<iostream>
using namespace std;


int main()
{
    float pi=22.0/7.0;

    cout<<"Value of pi"<<endl;

    for(int i=0; i<=10; i++)
    {
        cout.width(i+1);
        cout.precision(i+1);
        cout<<pi<<endl;
    }
}

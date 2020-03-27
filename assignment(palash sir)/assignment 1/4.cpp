#include<iostream>
using namespace std;

int main()
{
    int *p,a;
    cout<<"Enter the value of a = ";
    cin>>a;
    p=&a;
    cout<<"Before Increment"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"p = "<<*p<<endl;

    (*p)++;
    cout<<"Before Increment"<<endl;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of p = "<<*p<<endl;


    cout<<endl<<"Address of a = "<<&a<<endl;
    cout<<"Address of p = " <<p<<endl;
    /*reference variable and */

    return 0;
}

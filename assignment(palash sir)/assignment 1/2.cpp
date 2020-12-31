#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a = ";
    cin>>a;
    int & ref_var= a;
    cout<<"Before Increment"<<endl;
    cout<<"Value of a a = "<<a<<endl;
    cout<<"Value of ref_var = "<<ref_var<<endl;

    a++;
    cout<<"Before Increment"<<endl;
    cout<<"Value of a a = "<<a<<endl;
    cout<<"Value of ref_var = "<<ref_var<<endl;


    cout<<endl<<"Address of a = "<<&a<<endl;
    cout<<"Address of ref_var = " <<&ref_var<<endl;
    /*reference variable and */

    return 0;
}

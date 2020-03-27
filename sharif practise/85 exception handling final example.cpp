#include<iostream>
using namespace std;

void divide(double numerator, double denominator)
{
    try
    {
        if(denominator==0) throw 0;
        cout<<"Result = "<<numerator/denominator<<endl;
    }
    catch(int e)
    {
        cout<<"can't divide something by zero"<<endl;
    }
}

int main()
{
    double num,denum;

    do
    {
        cout<<endl<<"Enter numerator (0 to stop) : ";
        cin>>num;
        cout<<"Enter denominator : ";
        cin>>denum;
        divide(num,denum);
    }
    while(num);
}

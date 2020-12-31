#include<iostream>
using namespace std;

void positive(int a)
{
    cout<<a<<endl;
    try
    {
        if(a<0)
            throw a;
    }
    catch(int e)
    {
        cout<<"exception"<<e<<endl;
    }
}

int main()
{
   positive(5);
   positive(-5);
   positive(6);
}


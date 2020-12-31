#include<iostream>
using namespace std;

void divide(int x,int y, int z)
{
    cout<<endl<<"We are inside the function"<<endl;

    if(x-y!=0)
    {
        int r=z/(x-y);
        cout<<"Result = "<<r<<endl;
    }
    else
        throw x-y;
}

int main()
{
    try
    {
        cout<<endl<<"We are inside the try block"<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"caught the exception"<<endl;
    }
}

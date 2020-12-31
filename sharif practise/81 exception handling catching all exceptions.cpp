#include<iostream>
using namespace std;

int main()
{
    try
    {
        int a;
        cin>>a;
        if(a==1)
            throw 1;
        if(a==2)
            throw 1.2;
        if(a=3)
            throw "hasanhp";
    }
    catch(int a)
    {
        cout<<"exception(int)"<<endl;
    }

    catch(...)
    {
        cout<<"exception"<<endl;
    }
}

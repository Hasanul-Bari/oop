#include<iostream>
using namespace std;

void excep()
{
    try
    {
        throw 1;
    }
    catch(int e)
    {
        cout<<"function : "<<e<<endl;
        throw;
    }

}

int main()
{
    try
    {
        excep();
    }
    catch(int e)
    {
        cout<<"main : "<<e<<endl;
    }

}

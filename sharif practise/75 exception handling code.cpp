#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"try"<<endl;
        throw 1;
    }

    catch(int e)
    {
        cout<<"catch "<<e<<endl;
    }
}

#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"try"<<endl;
        throw 1;
        cout<<"try end"<<endl;    ///execute kre nai
    }

    catch(int e)
    {
        cout<<"catch "<<e<<endl;
    }
}


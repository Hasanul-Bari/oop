#include<iostream>
using namespace std;

void test (int x)
{
    try
    {
        if(x==1)
            throw x;
        else if(x==0)
            throw 'X';
        else if(x==-1)
            throw 1.0;
        cout<<"End of try block"<<endl;
    }

    catch(...)
    {
        cout<<"caught an exception"<<endl;
    }



}

int main()
{
    cout<<"Testing generic catch"<<endl;
    test(-1);
    test(1);
    test(0);


    test(2);


}

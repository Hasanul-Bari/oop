#include<iostream>
using namespace std;

class base
{

};
class derive : public base
{

};

int main()
{
    base b;
    derive d;

    try
    {
        throw b;
    }

    catch(derive e)
    {
        cout<<"derive exception"<<endl;
    }
    catch(base e)
    {
        cout<<"base exception"<<endl;
    }


}

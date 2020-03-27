#include<iostream>
using namespace std;

class obj
{
public:
    obj()  {cout<<"Constructed"<<endl;}
    ~obj()  {cout<<"Destructed"<<endl;}
};

int main()
{
    obj A,B;
    {
        obj C,D;
    }
    obj E,F;
}

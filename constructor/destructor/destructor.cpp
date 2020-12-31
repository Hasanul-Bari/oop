#include<iostream>
using namespace std;

int count=0;

class alpha
{
public:
    alpha()
    {
        count++;
        cout<<endl<<"Object created  "<<count<<endl;
    }
    ~alpha()
    {
        cout<<endl<<"Object destroyed  "<<count<<endl;
        count--;
    }
};

int main()
{
    alpha a1,a2;
    {
        alpha a3;
    }
    {
        alpha a4;
    }



    return 0;
}

#include<iostream>
using namespace std;

class hp
{
    int a,b,c;
public:
    int add (int x, int y)
    {
        a=x;
        b=y;
        cout<<x+y;
    }

    void add (int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<x+y+z;

    }

    void add (int x, double y)
    {
        a=x;
        b=y;
        cout<<x+y;
    }
};

int main()
{
    hp h;
    h.add(3,2.8);

    return 0;


}

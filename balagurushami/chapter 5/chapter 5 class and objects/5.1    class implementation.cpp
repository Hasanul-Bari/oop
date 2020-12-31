#include<iostream>
using namespace std;

class item
{
    int num;
    float cost;
public:
    void getdata(int a,float b)
    {
        num=a;
        cost=b;
    }
    void putdata(void);
};

int main()
{
    item i1,i2,i3;
    i1.getdata(10,20.35);
    i1.putdata();




    return 0;
}

void item :: putdata()
{
    cout<<num<<"\n"<<cost;
}

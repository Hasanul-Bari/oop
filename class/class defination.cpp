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
    item i1,i2,i3[4][5];
    i1.getdata(10,20.35);
    i1.putdata();

    for(int i=0; i<4; i++)
        for(int j=0; j<3; j++)
            i3[i][j].getdata(7,7.8);

    for(int i=0; i<4; i++)
        for(int j=0; j<3; j++)
            i3[i][j].putdata();


    return 0;
}

void item :: putdata()
{
    cout<<num<<"\n"<<cost<<"\n";
}

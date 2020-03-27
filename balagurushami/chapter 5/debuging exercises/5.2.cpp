#include<iostream>
using namespace std;

class room
{
    int width;
    int lenth;
public:
    void setvalue (int w,int l)
    {
        width=w;
        lenth=l;
    }
};

int main()
{
    room objroom;
    objroom.setvalue(12,1.4);
    return 0;
}


#include<iostream>
using namespace std;

class room
{
    int width;
    int length;
public:
    room()
    {
        length=0;
        width=0;
    }
    room (int value)
    {
        length=width=8;
    }
    void display()
    {
        cout<<length<<' '<<width;
    }
};

int main()
{
    room objroom1;
    objroom1.display();
    return 0;
}



#include<iostream>
using namespace std;

class room;

void area()
{
    int width,height;
    class room
    {
        int width, height;
    public:
        void setvalue(int w, int h)
        {
            width=w;
            height=h;
        }
        void displayvalues()
        {
            cout<< (float)width << ' ' << (float)height;
        }
    };
    room objroom1;
    objroom1.setvalue(12,8);
    objroom1.displayvalues();

}

main()
{
    area();
    //room objroom2;

}

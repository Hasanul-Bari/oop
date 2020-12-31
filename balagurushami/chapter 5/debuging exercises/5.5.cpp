#include<iostream>
using namespace std;

class length
{
    int feet;
    float inches;
public:
    length()
    {
        feet=5;
        inches=6.0;
    }
    length(int f, float in)
    {
        feet=f;
        inches=in;
    }
    length addlength(length l)
    {
        l.inches+=this->inches;
        l.feet+=this->feet;
        if(l.inches>12)
        {
            l.inches-=12;
            l.feet++;
        }
        return l;
    }

    int getfeet()
    {
        return feet;
    }
    float getinches()
    {
        return inches;
    }

};

int main()
{
    length objlength1;
    length objlength2(5,6.5);
    objlength1=objlength1.addlength(objlength2);
    cout<<objlength1.getfeet()<<' ';
    cout<<objlength1.getinches()<<' ';
}

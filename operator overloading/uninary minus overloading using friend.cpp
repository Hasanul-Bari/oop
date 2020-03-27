#include<iostream>
using namespace std;

class space
{
    int x,y,z;
public:
    void getdata()   {cin>>x>>y>>z;}
    void display()
    {
        cout<<"x= "<<x<<"  ";
        cout<<"y= "<<y<<"  ";
        cout<<"z= "<<z<<endl;
    }

    friend void operator - (space &S );
};

void operator - (space &S)
{
    S.x=-S.x;
    S.y=-S.y;
    S.z=-S.z;
}

int main()
{
    space s;
    s.getdata();
    cout<<"s : ";
    s.display();

    -s;

    cout<<"s : ";
    s.display();

    return 0;
}


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

    void operator >> ();
};

void space :: operator >> ()
{
    cin>>x;
    cin>>y;
    cin>>z;
}

int main()
{
    space s;
    s.getdata();
    cout<<"s : ";
    s.display();

    cin>>s;

    cout<<"s : ";
    s.display();

    return 0;
}

#include<iostream>
using namespace std;

class number
{
    int x,y;
public:
    number() {x=0; y=0;}
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    friend ostream & operator <<(ostream &os,number ob)
    {
        os<<ob.x<<" "<<ob.y<<endl;
    }


};

int main()
{
    number n1(2,5),n2(1,5),n3;

    cout<<"n1 = "<<n1;
    cout<<"n2 = "<<n2;

    cout<<n1<<n2;



    return 0;
}


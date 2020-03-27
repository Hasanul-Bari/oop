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
    void print()  { cout<<x<<" "<<y<<endl;}

    bool operator && (number ob)
    {
        return (x&&y) && (ob.x&&ob.y);
    }
};

int main()
{
    number n1(2,5),n2(1,5),n3;
    cout<<"n1 = ";   n1.print();
    cout<<"n2 = ";   n2.print();

    if(n1&&n2)
        cout<<"N0 zero elements"<<endl;
    else
        cout<<"zero element detected"<<endl;


    return 0;
}


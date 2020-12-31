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

    bool operator < (number ob)
    {
        return (x+y) < (ob.x+ob.y);
    }
    bool operator > (number ob)
    {
        return (x+y) > (ob.x+ob.y);
    }
    bool operator == (number ob)
    {
        return (x+y) == (ob.x+ob.y);
    }
};

int main()
{
    number n1(2,5),n2(2,5),n3;
    cout<<"n1 = ";   n1.print();
    cout<<"n2 = ";   n2.print();

    if(n1<n2)
        cout<<"n2 is greater"<<endl;
    else if(n1>n2)
        cout<<"n1 is greater"<<endl;
    else if(n1==n2)
        cout<<"n1 and n2 are equals"<<endl;

    return 0;
}

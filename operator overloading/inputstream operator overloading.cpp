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
    friend istream & operator >>(istream &is,number &ob)
    {
        is>>ob.x>>ob.y;
       // return is;
    }

    friend ostream & operator <<(ostream &os,number ob)
    {
        os<<ob.x<<" "<<ob.y<<endl;
        //return os;
    }



};

int main()
{
    number n1,n2,n3(7,8);

    cin>>n1>>n2;
    cout<<"n1 = "<<n1;
    cout<<"n2 = "<<n2;
    cout<<"n3 = "<<n3;

    cout<<n1<<n2<<n3;



    return 0;
}



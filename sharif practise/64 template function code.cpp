#include<iostream>
using namespace std;

template <class hp>
hp add (hp a, hp b)
{
    return a+b;
}

int main()
{
    int x=5,y=6;
    cout<<add(x,y)<<endl;

    cout<<add(2,3)<<endl;

    float m=5.2,n=6.3;
    cout<<add(m,n)<<endl;

    double p=5.2,q=6.3;
    cout<<add(p,q)<<endl;

    string c="hasan",d="hp";
    cout<<add(c,d)<<endl;


}

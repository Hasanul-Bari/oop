#include<iostream>
using namespace std;

int  maxm(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=maxm(a,b);
    cout<<c<<endl;
    return 0;

}

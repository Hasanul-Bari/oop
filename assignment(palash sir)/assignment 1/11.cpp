#include<iostream>
using namespace std;
int x,y;
int&  maxm(int &x,int &y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<maxm(a,b)<<endl;
    maxm(a,b)=-1;


    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    return 0;

}


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    cout<<a.assign(b);

    string m,n;
    cin>>m>>n;
    cout<<m.assign(n,3,n.length());

    string x,y;
    cin>>x>>y;
    //cout<<x.assign(10,"hp");


}

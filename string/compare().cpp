#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int x=a.compare(b);

    if(x==0)
        cout<<"strings are equal"<<endl;

    else if(x>0)
        cout<<"string 1 is greater than string 2"<<endl;

    else if(x<0)
        cout<<"string 1 is smaller than string 2"<<endl;

    cout<<x<<endl;

    return 0;
}

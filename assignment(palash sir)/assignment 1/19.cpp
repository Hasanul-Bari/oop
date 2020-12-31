#include<iostream>
using namespace std;

class swaping
{
public:


    void swap(int & , int & );
};

void swaping :: swap(int & x,int & y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}


int main()
{
    swaping s1;

    int a,b;
    cin>>a>>b;
    cout<<"Before swaping"<<endl;
    cout<<a<<endl<<b<<endl;



    s1.swap(a,b);
    cout<<"After swaping"<<endl;
    cout<<a<<endl<<b<<endl;


    return 0;

}

#include<iostream>
using namespace std;

ostream & manipbyShakib (ostream & manipbyShakib)
{
    manipbyShakib<<"This is generated by manipulator of Shakib ";
    return manipbyShakib;
}

int main()
{
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    cout<<manipbyShakib<<sum<<endl;
}

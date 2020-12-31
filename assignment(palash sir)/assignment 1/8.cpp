
#include<iostream>
using namespace std;
int sqr(int x);
int main(void)
{
int a;
cin>>a;

cout<<sqr(a)<<endl;
cout<<a;
return 0;
}
int sqr(int x)
{
x = x*x;
return(x);
}

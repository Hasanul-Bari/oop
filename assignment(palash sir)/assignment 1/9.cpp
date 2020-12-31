#include<iostream>
using namespace std;
void sqr(int & x);
int main(void)
{
int a;
cin>>a;
 cout<<a;
 sqr(a);

//cout<<sqr(a)<<endl;
cout<<a;
return 0;
}
void sqr(int & x)
{
x = x*x;
}

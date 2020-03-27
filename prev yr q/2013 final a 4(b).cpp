#include<iostream>
using namespace std;

int main()
{
    int j,k;
    int &i=j;
    j=10;
    k=121;
    i=k;
    cout<<i<<" , "<<j<<" , "<<k;
    return 0;
}

#include<iostream>
using namespace std;

int isprime (int n)
{
    if(n<=1)
        return 0;    ///returns 1 if prime,otherwise 0
    for(int i=2; i<n; i++)
        if(n%i==0)
            return 0;

    return 1;
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(isprime(a)==1)
        cout<<a<<" is prime"<<endl;
    else
        cout<<a<<" is not prime"<<endl;
}

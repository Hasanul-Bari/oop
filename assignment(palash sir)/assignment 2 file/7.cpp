#include<iostream>
using namespace std;

class prime
{
    int n;
public:
    prime()
    {
        cin>>n;
    }
    int isprime ()
    {
        if(n<=1)
            return 0;    ///returns 1 if prime,otherwise 0
        for(int i=2; i<n; i++)
            if(n%i==0)
                return 0;

        return 1;
    }
    ~prime() {}

};

int main()
{
    int n;
    cout<<"Enter number of integers you want to store: ";
    cin>>n;

    prime p[n];
    for(int i=0; i<n;i++)
    {
        if(p[i].isprime()==1)
            cout<<endl<<"prime"<<endl;
        else
            cout<<endl<<"not prime"<<endl;
    }

}



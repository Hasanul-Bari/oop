#include<iostream>
#include<cmath>
using namespace std;

int prime[300000],nprime;
int mark[1000002];


void seive(int n)
{
    int i, j, limit=sqrt(n*1.0)+2;                ///1 if not prime, 0 if prime
    mark[i]=1;

    ///marking the even numbers(except 2) as not prime

    for(i=4; i<=n; i+=2)
        mark[i]=1;

    /// 2 is prime
    prime[nprime++]=2;

    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }


    cout<<"The prime numbers:"<<endl;
    for(i=0; i<nprime; i++)
    {
        cout<<prime[i]<<"\t";
    }

}

int main()
{
    unsigned int a;
    cout<<"Enter the limit : ";
    cin>>a;
    seive(a);
    return 0;
}

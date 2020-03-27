#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector<bool> prime(1000009,true);

int main()
{
    faster


    prime[0]=false;
    prime[1]=false;
    for(long long i=2; i*i<=1000009; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=1000009; j=j+i)
                prime[j]=false;
        }
    }

    vector<ll> v;
    for(long long i=2; i<=1000009; i++)
    {
        if(prime[i]==true)
        {
            //cout<<i<<" ";
            v.pb(i);
        }

    }



    int t,n;
    cin>>t;


    while(t--)
    {
        cin>>n;

        bool hp=false;

        for(int i=0; (i<v.size() && v[i]<=n); i++)
        {
            //cout<<v[i]<<" "<<n-v[i]<<endl;

            if(prime[n-v[i]]==true)
            {
                cout<<v[i]<<" "<<n-v[i]<<endl;
                hp=true;
                break;
            }
        }

        if(hp==false)
            cout<<-1<<endl;




    }




    return 0;
}

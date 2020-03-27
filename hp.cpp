#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;

void printpath(int u,int s)
{
    if(u==s)
    {
        cout<<u<<" ";
        return ;
    }
    printpath(p[u],s);

    cout<<u<<" ";

}

bool bellmenford(vector<int> adj[],vector<int> w[],int n,ll d[])
{



    for(int i=1; i<n; i++)
    {
        for(int u=1; u<=n; u++)
        {
            for(int j=0; j<adj[u].size(); j++)
            {
                int v=adj[u][j];

                if(d[u]+w[u][j]<d[v])
                {
                    d[v]=d[u]+w[u][j];
                   // p[v]=u;
                }
            }
        }
    }


    for(int u=1; u<=n; u++)
    {
        for(int j=0; j<adj[u].size(); j++)
        {
            int v=adj[u][j];

            if(d[u]+w[u][j]<d[v])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    faster

    int n,e,t=1;
    while(cin>>n)
    {
        cout<<"Set #"<<t<<endl;
        t++;


        int b[n+1];
        for(int i=1; i<=n; i++)
            cin>>b[i];

        vector <int> adj[n+1];
        vector <int> w[n+1];

        int u,v,z;
        cin>>e;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            z=b[v]-b[u];
            z=z*z*z;
            //cout<<z<<endl;
            w[u].push_back(z);
        }

        ll d[n+1];
        for(int i=1; i<=n; i++)
        {
            d[i]=1e18;
        }

        int src=1;

        d[src]=0;

        bool hp=bellmenford(adj,w,n,d);
        cout<<hp<<" hp"<<endl;

        int q,x;
        cin>>q;
        while(q--)
        {
            cin>>x;
            if(hp==true && d[x]>=3)
                cout<<d[x]<<endl, printpath(x,1);
            else
                cout<<"?"<<endl;
        }

    }


    return 0;
}




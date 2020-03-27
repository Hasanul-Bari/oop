#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<string,int> m1,m2,m3;

    for(int i=0; i<3; i++)
    {
        string s;
        int n;
        cin>>s>>n;
        m1.insert(make_pair(s,n));
    }

    for(int i=0; i<4; i++)
    {
        string s;
        int n;
        cin>>s>>n;
        m2.insert(make_pair(s,n));
    }

    merge(m1.begin(),m1.end(),m2.begin(),m2.end(),m3.begin());
}


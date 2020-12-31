#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;


int main()
{
    vector <int> v1,v2;
    vector <int> :: iterator it;
    int s,s2;
    cout<<"Enter the size of the vector : ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    cout<<"Enter the size of the vector : ";
    cin>>s2;

    for(int i=0; i<s2; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector <int> v3(v1.size()+v2.size());

   merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

   cout<<v3.size()<<endl;

   for(it=v3.begin(); it!=v3.end(); it++)
    cout<<*it<<" ";


}

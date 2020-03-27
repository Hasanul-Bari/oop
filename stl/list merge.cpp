#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;


int main()
{
    list <int> v1,v2;
    list <int> :: iterator it;
    int s;
    cout<<"Enter the size of the vector : ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    cout<<"Enter the size of the vector : ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

    /*v1.sort();

    for(it=v1.begin(); it!=v1.end(); it++)
        cout<<*it<<" ";
    cout<<endl;


    v2.sort();
    for(it=v2.begin(); it!=v2.end(); it++)
        cout<<*it<<" ";
    cout<<endl;*/





    /*int m=v1.size()+v2.size();
    list <int> v3(m);
   merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());*/

   v1.merge(v2);





   //cout<<v3.size()<<endl;

   for(it=v1.begin(); it!=v1.end(); it++)
    cout<<*it<<" ";
  cout<<endl;


}


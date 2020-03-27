#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
    int n;

    list <int> l;
    list <int> :: iterator it;
    cout<<"Enter the size of the list"<<endl;
    cin>>n;

    cout<<"Enter the elements:"<<endl;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        l.push_back(x);
    }
    cout<<"The list :"<<endl;
    for(it=l.begin(); it!=l.end(); it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    l.sort();
    cout<<"list after sort"<<endl;
    for(it=l.begin(); it!=l.end(); it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"Enter the size of the another list"<<endl;
    cin>>n;
    list <int> l2,l3;

    cout<<"Enter the elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        l2.push_back(x);
    }

    cout<<"The second list :"<<endl;
    for(it=l2.begin(); it!=l2.end(); it++ )
    {
        cout<<*it<<endl;
    }

    l.merge(l2);

    cout<<"After merge"<<endl;
     for(it=l.begin(); it!=l.end(); it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    l.sort();

    cout<<"After sort"<<endl;
     for(it=l.begin(); it!=l.end(); it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;



}

/*
5
8 6 15 2 5
3
7 4 1

*/

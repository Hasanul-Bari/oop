#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;

    s.insert(10);
    s.insert(3);
    s.insert(5);
    s.insert(10);

    for(it=s.begin();  it!=s.end();  it++)
        cout<<*it<<" ";
    cout<<endl;



    it=s.find(5);            ///s.erase(s.find(5));
    s.erase(it);
    for(it=s.begin();  it!=s.end();  it++)
        cout<<*it<<" ";
    cout<<endl;


    pair < set <int> :: iterator , bool> p;
    p=s.insert(10);

    if(p.second==false)
        cout<<"Can't insert"<<endl;
    else
        cout<<"Insert"<<endl;

}

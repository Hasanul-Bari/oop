#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list <int> mylist;
    list <int> :: iterator it;

    mylist.push_back(15);
    mylist.push_back(10);
    mylist.push_front(5);
    mylist.push_front(20);
    mylist.push_back(-1);

    cout<<endl;
    for(it=mylist.begin();  it!=mylist.end(); it++ )     ///   it < mylist.end() dile error dekhai
        cout<<*it<<endl;

    cout<<endl;
    mylist.reverse();
    for(it=mylist.begin();  it!=mylist.end(); it++ )
        cout<<*it<<endl;

    cout<<endl;
    mylist.remove(5);
    for(it=mylist.begin();  it!=mylist.end(); it++ )
        cout<<*it<<endl;

}

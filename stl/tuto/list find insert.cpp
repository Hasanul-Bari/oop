#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
    int arr[5]={5,2,1,6,3};

    list <int> mylist(arr,arr+5);
    list <int> :: iterator it;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"  ";
    cout<<endl;


    it=find(mylist.begin(), mylist.end(), 6);
            cout<<*it<<endl;

    if(it==mylist.end())
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;


    mylist.insert(it,7);
    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"  ";
    cout<<endl;





    it=find(mylist.begin(), mylist.end(), 1);
            cout<<*it<<endl;

    if(it==mylist.end())
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;


    mylist.erase(it);
    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"  ";
    cout<<endl;

    //sort(mylist.begin(),mylist.end());
}

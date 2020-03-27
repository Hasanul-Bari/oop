#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

bool hp (int a, int b)
{
    return (a>b);
}

int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    int s;
    cout<<"Enter the size of the vector : ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.begin()+3);                         /// sorts 1st 3 elements;

    for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<"\t";

    cout<<endl;

    sort(v.begin(),v.end());                        ///ascending

    for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<"\t";


    cout<<endl;

    sort(v.begin(),v.end(),hp);                        ///descending

    for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<"\t";
    cout<<endl;






    it=find(v.begin(), v.end(), 23);
    ///cout<<*it<<endl;

    v.insert(it,7);

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"  ";
    cout<<endl;






}

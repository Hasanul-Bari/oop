#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> :: iterator it;


    for(int i=0; i<5; i++)
        v.push_back(i);

    for(it=v.begin();  it<v.end(); it++)
        cout<<*it<<endl;


}

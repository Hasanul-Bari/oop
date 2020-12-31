#include<iostream>
#include<utility>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector < pair<string,int> > v;
    vector < pair<string,int> > :: iterator it;

    v.push_back(make_pair("hasanhp",3));
    v.push_back(make_pair("sadman",4));
    v.push_back(make_pair("noel",2));
    v.push_back(make_pair("aiead",7));


    for(it=v.begin(); it<v.end(); it++)
        cout<<it->first<<"  "<<it->second<<endl;



}



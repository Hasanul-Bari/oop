#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    map <string,int>  m;
    map <string,int> :: iterator it;

    m["hasanhp"]=3;
    m["sadman"]=4;
    m["noel"]=2;
    m["omlan"]=8;

    m.insert(make_pair("aiead",5));   ///avabeo kra jai

    cout<<m["hasanhp"]<<endl;

    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;



    cout<<"size = "<<m.size()<<endl;



    cout<<endl;


    it=m.find("hasanhp");
    m.erase(it);

    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;



}

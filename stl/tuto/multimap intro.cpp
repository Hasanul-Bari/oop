#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    multimap <string,int>  m;
    multimap <string,int> :: iterator it;

    ///m["hasanhp"]=3;    avabe krle error dekhai multimap a

    m.insert(make_pair("hasanhp",3));
    m.insert(make_pair("hasanhp",65));
    m.insert(make_pair("hasanhp",68));
    m.insert(make_pair("hasanhp",65));

    m.insert(make_pair("sadman",4));
    m.insert(make_pair("noel",2));
    m.insert(make_pair("omlan",8));

//    m["sadman"]=4;
   // m["noel"]=2;
   // m["omlan"]=8;

    m.insert(make_pair("aiead",5));


    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;



    cout<<"size = "<<m.size()<<endl;



    cout<<endl;


    it=m.find("hasanhp");
    m.erase(it);

    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;



}


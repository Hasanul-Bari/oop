#include<iostream>
#include<iterator>
#include<utility>

using namespace std;

int main()
{
    pair <string,int> p;
    p=make_pair("hasanhp",7);

    cout<<p.first<<"  "<<p.second<<endl;

    p.first="hp";
    p.second= 72;
    cout<<p.first<<"  "<<p.second<<endl;


    pair <string,int> p1("hp7",2013);
    cout<<p1.first<<"  "<<p1.second<<endl;

    //pair <string,int> ::iterator it;
    //it=p;
    //cout<<it->first<<" "<<it->second<<endl;

    p=p1;
    cout<<p.first<<"  "<<p.second<<endl;

    pair <string,int> p3(p1);
    cout<<p1.first<<"  "<<p1.second<<endl;





    pair< string,pair<int,string> > p4;

    p4=make_pair("hasan" ,make_pair(03, "paharpur"));

    cout<<p4.first<<"  "<<p4.second.first<<"  "<<p4.second.second<<endl;


}

#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter a string:"<<endl;
    getline(cin,s1);

    cout<<"Enter the substring u want to find"<<endl;
    cin>>s2;

    cout<<s1.substr(s1.find(s2),s2.length())<<endl;
}

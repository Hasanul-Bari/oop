#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter a string:"<<endl;
    getline(cin,s1);

    cout<<"Enter the substring u want to find"<<endl;
    getline(cin,s2);

    cout<<"The substring is at position "<<s1.find(s2)<<endl;

    return 0;


}

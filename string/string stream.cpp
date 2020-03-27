#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int a;

    cin>>a;

    ostringstream s;

    s<<a;

    string hp=s.str();

    cout<<hp<<endl;

    return 0;
}

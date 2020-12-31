#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string> s;

    s.push("hasanhp");
    s.push("aiead");
    s.push("sadmad");
    s.push("noel");

    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;

    cout<<endl<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

}

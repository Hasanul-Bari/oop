#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue <string> s;

    s.push("hasanhp");
    s.push("aiead");
    s.push("sadmad");
    s.push("noel");


    cout<<s.front()<<endl;

    s.pop();
    cout<<s.front()<<endl;

    cout<<endl<<endl;

    while(!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }

}


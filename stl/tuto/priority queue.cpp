#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue <int> s;

    s.push(8);
    s.push(100);
    s.push(12);
    s.push(45);


    cout<<s.top()<<endl;     ///ulta lexicography vabe thake,,,,int ar bela ascending

    s.pop();
    cout<<s.top()<<endl;

    cout<<endl<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

}

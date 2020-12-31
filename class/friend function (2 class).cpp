//max of 2 no"s

#include<iostream>
using namespace std;

class item;
class sample
{
    int a;
public:
    void set()  {cin>>a;}
    friend void max(sample,item);
};

class item
{
    int b;
public:
    void get() {cin>>b;}
    friend void max (sample, item);
};

void max (sample s, item i)
{
    if(s.a>=i.b)
        cout<<"The maximum number is "<<s.a<<endl;
    else
        cout<<"The maximum number is "<<i.b<<endl;
}

int main()
{
    sample s;
    item i;
    s.set();
    i.get();
    max(s,i);

    return 0;

}

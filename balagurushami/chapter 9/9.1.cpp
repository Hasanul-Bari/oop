#include<iostream>
using namespace std;

class info
{
    char *name;
    int number;
public:
    void getinfo()
    {
        cout<<"Info::getinfo"<<endl;
        getname();
    }

    void getname()
    {
        cout<<"Info::getname"<<endl;
    }
};

class name :public info
{
    char *name;
public:
    void getname()
    {
        cout<<"name::getname"<<endl;
    }

};

int main()
{
    info *p;
    name n;
    //p=n;
    p->getinfo();
}

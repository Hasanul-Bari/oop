///hierarchical inheritance
#include<iostream>
using namespace std;
class A
{
protected:
    int no;
public:
    void get_no()
    {
        cout<<"Enter no: "<<endl;
        cin>>no;
    }
};
class B: public A

{
public:
    void square()
    {
        cout<<"Square of the number: "<<endl;
        cout<<(no*no)<<endl;
    }
};
class C: public A
{
public:
    void cube()
    {
        cout<<"Cube of the number: "<<endl;
        cout<<(no*no*no)<<endl;
    }
};
int main()
{
    B bobj;
    C cobj;
    bobj.get_no();
    bobj.square();
    cobj.get_no();
    cobj.cube();
    return 0;
}

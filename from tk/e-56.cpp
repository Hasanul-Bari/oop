///single inheritance
#include<iostream>
using namespace std;

class A
{
    int a;
public:
    void getval_a(int);
    int get_a();
};

class B: public A
{
    int b,c;
public :
    void getval_b(int);
    void add();
    void dispval();

};
void A::getval_a(int x)
{
    a=x;
}
void B::getval_b(int x)
{
    b=x;
}
int A::get_a()
{
    return a;
}
void B::add()
{
    c=get_a();///nesting of member function
    c=c+b;
}
void B::dispval()
{
    cout<<"value of  B :"<<b<<" Total: "<<c<<" "<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the values of A and B"<<endl;
    cin>>a>>b;
    B obj;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.dispval();
    return 0;
}

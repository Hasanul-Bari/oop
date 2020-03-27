#include<iostream>
using namespace std;

template<class T1, class T2>
class abc
{
    T1 x;
    T2 y;
public:
    abc() {}
    abc(T1 a, T2 b)
    {
        x=a; y=b;
    }

    void set(T1 a, T2 b);

    T1 getx()
    {
        return x ;
    }
    T2 gety()
    {
        return y;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

};

template <class T1,class T2>
void abc<T1,T2> :: set(T1 a, T2 b)
{
    x=a;  y=b;
}

int main()
{
    abc <int,string> obj1(7,"hasan");
    obj1.print();
    obj1.set(8,"hp");
    obj1.print();
    cout<<obj1.getx()<<endl;
    cout<<obj1.gety()<<endl;

    abc<float,int>obj3(5.5,5);
    obj3.print();



}


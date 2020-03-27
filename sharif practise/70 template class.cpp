#include<iostream>
using namespace std;

template<class T>
class abc
{
    T x;
public:
    abc() {}
    abc(T a)
    {
        x=a;
    }

    void set(T a);

    T get()
    {
        return x ;
    }
    void print()
    {
        cout<<x<<endl;
    }

};

template <class T>
void abc<T> :: set(T a)
{
    x=a;
}

int main()
{
    abc <string> obj1("hasan"),obj2;
    obj1.print();
    obj1.set("hp");
    obj1.print();
    obj2=obj1.get();
    obj1.print();
    obj2.print();
}

#include<iostream>
using namespace std;

template <class T, int size>
class abc
{
    T x[size];
public:
    void print()
    {
        cout<<sizeof(x)<<endl ;
    }

};
int main()
{
    abc <char,4> obj;
    obj.print();
}

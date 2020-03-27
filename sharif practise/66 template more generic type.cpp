#include<iostream>
using namespace std;

template <class T1,class T2>
void print(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    print(5,6);
    print(5,5.965);
    print(5,"hasanhp");
    print(5.3,6);
}

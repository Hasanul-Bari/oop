#include<iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

int main()
{
    print(5);
    print(5.965);
    print("hasanhp");
}

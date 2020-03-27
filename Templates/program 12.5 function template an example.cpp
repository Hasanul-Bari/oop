#include<iostream>
using namespace std;

template <class T>
void Swap(T &x, T &y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}

void fun(int m,int n,float a,float b)
{
    cout<<"m and n before swap: "<<m<<" "<<n<<endl;
    Swap(m,n);
    cout<<"m and n after swap: "<<m<<" "<<n<<endl;

    cout<<"a and b before swap: "<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<"a and b after swap: "<<a<<" "<<b<<endl;

}

int main()
{
    fun(100,200,11.22,33.44);
    return 0;
}

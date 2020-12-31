#include<iostream>
using namespace std;

int main()
{
    int m=6, n=8;
    const int *const ptr=&m;

    cout<<ptr<<endl<<*ptr<<endl;

    ///ptr=&n;     ///A const pointer to a const value can not be set to point to another address

    ///*ptr=n;    ///nor can the value it is pointing to be changed through the pointer.

    cout<<ptr<<endl<<*ptr<<endl;
}

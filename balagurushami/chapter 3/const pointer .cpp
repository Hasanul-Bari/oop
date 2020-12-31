#include<iostream>
using namespace std;

int main()
{
    int m=6, n=8;
    int *const ptr=&m;

    cout<<ptr<<endl<<*ptr<<endl;

    ///ptr=&n;     not okay, once initialized, a const pointer can not be changed. ///we cannot modify the address that ptr is initialized to

    *ptr=n;        ///allowed, since ptr points to a non-const int

    cout<<ptr<<endl<<*ptr;

}

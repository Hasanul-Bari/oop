#include<iostream>
using namespace std;

int main()
{
    int m=6, n=8;
    int const *ptr=&m;

    cout<<ptr<<endl<<*ptr<<endl;

    ptr=&n;             ///it can point to any variable of correct type
    ///*ptr=n;          ///but the contents of what it points to cannot be changed

    cout<<ptr<<endl<<*ptr<<endl;
}

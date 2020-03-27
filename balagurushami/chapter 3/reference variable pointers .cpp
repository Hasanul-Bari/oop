#include<iostream>
using namespace std;

int main()
{
    int x=5,y;
    int *ptr=&x;
    int & m= *ptr;



    cout<<x<<endl<<*ptr<<endl<<m<<endl ;

    cout<<&x<<endl<<ptr<<endl<<&m<<endl ;

    return 0;
}

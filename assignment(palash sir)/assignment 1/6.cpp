#include<iostream>
using namespace std;

void print(void)
{
    static int m=0;
    m++;
    cout<<"print is called "<<m<<" time"<<endl;
}


int main()
{
    const int a=5;
    //a++;
    cout<<a<<endl;

    print();
    print();
    print();

    return 0;

}

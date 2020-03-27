#include<iostream>
#include<conio.h>
using namespace std;

class test
{
    int *a;
public:
    test(int size)
    {
        a=new int[size];
        cout<<endl<<"constructor msg : Integer array of size "<<size<<" is created";
    }

    ~test()
    {
        delete a;
        cout<<endl<<"destructor msg : Freed up the memory allocated for Integer array";
    }
};

int main()
{
    int s;
    cout<<"Enter the size of array  ";
    cin>>s;
    cout<<endl<<"creating an object of test class ";
    test t(s);
    cout<<endl<<"Press any key to end the process";
    getch();

    return 0;
}

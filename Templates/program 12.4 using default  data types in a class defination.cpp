#include<iostream>
using namespace std;

template <class T1=int,class T2=int>
class test
{
    T1 a;
    T2 b;
public:
    test(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<endl;
    }
};

int main()
{
    //cout<<"Instantiating the class template as test1 with float and int data types..\ntest :";

    test<float,int> test1(1.23,123);
    test1.show();

    //cout<<"Instantiating the class template as test1 with int and char data types..\ntest :";

    test<int,char> test2(100,'W');
    test2.show();

    test <> test3('a',12.983);
    test3.show();

    return 0;


}


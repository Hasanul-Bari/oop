/// constructor over loading

#include<iostream>
using namespace std;

class test
{
    int a, b;
public:
    test ();
    test (int x);
    test (int x, int y);
    void disp();
};
test :: test()
{
    a=0;
    b=0;
}

test :: test (int x)
{
    a=b=x;
}

test :: test (int x, int y)
{
    a=x;
    b=y;
}
void test:: disp()
{
    cout <<"The value of a:"<<a<<endl;
    cout <<"The value of b:"<<b<<endl;
}

int main()
{
    test A;
    test B(100);
    test C(100, 200 );
    cout<<"\nObject A:"<<endl;
    A.disp();

    cout<<"\nObject B:"<<endl;
    B.disp();

    cout<<"\nObject C:"<<endl;
    C.disp();

    return 0;
}

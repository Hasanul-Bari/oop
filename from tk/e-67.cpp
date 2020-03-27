///binary operator overloading
#include<iostream>
using namespace std;
class test{
int a,b;
public:
    test(){a=0;b=0;}
    test(int x,int y){a=x;b=y;}
    test operator + (test t);
    void disp()
    {
       cout<<"Value of A: "<<a<<endl;
        cout<<"Value of B:"<<b<<endl;
    }
};
test test::operator + (test t)
{
    test temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
    return temp;
}
int main()
{
    test t1,t2,t3;
    t1=test(10,20);
    t2=test(30,40);
    t3=t1+t2;
cout<<"object 1"<<endl;
t1.disp();

cout<<"object 2"<<endl;
t2.disp();

cout<<"object 3"<<endl;
t3.disp();
return 0;
}

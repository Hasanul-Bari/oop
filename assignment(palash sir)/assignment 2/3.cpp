#include<iostream>
using namespace std;

class arithmetic_op
{
    int x,y;
public:
    arithmetic_op()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    void addition()
    {
        cout<<"The addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
    }
    void subtraction()
    {
        cout<<"The subtraction of "<<x<<" and "<<y<<" is "<<x-y<<endl;
    }
    void multiplication()
    {
        cout<<"The multiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    }
    void division()
    {
        cout<<"The division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
    }

    ~arithmetic_op(){}
};


int main()
{
    arithmetic_op op1;

    op1.addition();
    op1.subtraction();
    op1.multiplication();
    op1.division();

    return 0;


}

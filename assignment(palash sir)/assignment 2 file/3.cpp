#include<iostream>
#include<fstream>
using namespace std;

class arithmetic_op
{
    int x,y;
public:
    arithmetic_op()
    {
        ifstream in("input.txt");
        in>>x>>y;
    }
    void addition()
    {
        fstream out("output.txt",ios::out);
        out<<"The addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
    }
    void subtraction()
    {
        ofstream out("output.txt",ios::app);
        out<<"The subtraction of "<<x<<" and "<<y<<" is "<<x-y<<endl;
    }
    void multiplication()
    {
        ofstream out("output.txt",ios::app);
        out<<"The multiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    }
    void division()
    {
        ofstream out("output.txt",ios::app);
        out<<"The division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
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

#include<iostream>
#include<fstream>
using namespace std;

class sample
{
    int x,y;
public:
    sample()
    {
        ifstream in("input.txt");
        in>>x>>y;

    }

    void putdata()
    {
        ofstream out("output.txt");
        out<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
    ~sample(){}
};
int main()
{

    sample s;
    s.putdata();
    return 0;
}

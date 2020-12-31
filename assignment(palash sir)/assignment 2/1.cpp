#include<iostream>
using namespace std;

class sample
{
    int x,y;
public:
    sample()
    {
        cout<<"Enter the value of x and y:";
        cin>>x>>y;
    }

    void putdata()
    {
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
    ~sample(){}
};
int main()
{
    sample s;
    s.putdata();
    return 0;
}

#include<iostream>
using namespace std;

class sample
{
    int x,y;
public:
    sample()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x= "<<x<<"  y= "<<y<<endl;
    }
    void sum (sample , sample);

};

void sample :: sum(sample s1, sample s2)
{
    x=s1.x+s2.x;
    y=s1.y+s2.y;
}

int main()
{
    sample s1,s2;
    s1.display();
    s2.display();

    s2.sum(s1,s2);


    s2.display();

}

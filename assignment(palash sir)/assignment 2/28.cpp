#include<iostream>
using namespace std;

class COMPLEX
{
    int x,y;
public:
    COMPLEX() {x=0; y=0;}
    COMPLEX(int real, int imag)
    {
        x=real;
        y=imag;
    }

    friend COMPLEX ADD(int a,COMPLEX b)
    {
        COMPLEX temp;
        temp.x=a+b.x;
        temp.y=b.y;
        return temp;
    }

    friend COMPLEX ADD(COMPLEX a,COMPLEX b)
    {
        COMPLEX temp;
        temp.x=a.x+b.x;
        temp.y=a.y+b.y;
        return temp;
    }
    void display()
    {
        cout<<x<<" +j "<<y<<endl;;
    }

};

int main()
{
    COMPLEX s1(2,3),s2(6,2),s3,s4;
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    s3=ADD(a,s1);
    s4=ADD(s1,s2);

    cout<<"s1 = ";  s1.display();
    cout<<"s2 = ";  s2.display();
    cout<<"s3 = ";  s3.display();
    cout<<"s4 = ";  s4.display();

    return 0;


}

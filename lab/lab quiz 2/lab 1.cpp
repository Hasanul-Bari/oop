#include<iostream>
using namespace std;


template<class t1=int,class t2=int>
class sample
{
    t1 x;
    t2 y;
public:
    sample() {};

    sample(t1 a, t2 b)
    {
        x=a;
        y=b;
    }

    friend sample operator + (sample p, sample q)
    {
        sample temp;
        temp.x=p.x+q.x;
        temp.y=p.y+q.y;
        return temp;

    }

    void display()
    {
        cout<<"x = "<<x<<endl<<" y = "<<y<<endl;
    }

};



int main()
{
    sample <string,int> A("hasan",65);
    sample <string,int> B("hp",3),C;

    C=A+B;

    C.display();

    sample<int,float> m(2,3.2),n(3,6.5),r;
    r=m+n;
    r.display();


    sample<> X(2,3),Y(3,5),Z;

    Z=X+Y;
    Z.display();

    return 0;




}

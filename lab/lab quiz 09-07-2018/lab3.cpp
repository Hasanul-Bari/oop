#include<iostream>
using namespace std;

class class2;
class class1
{
    int x;
public:
    void get()
    {
        cout<<"x=";
        cin>>x;
    }

    friend void swap (class1 &, class2 &);
    friend void display(class1 &, class2 &);

};

class class2
{
    int y;
public:
    void input()
    {
        cout<<"y=";
        cin>>y;
    }

    friend void swap (class1 &, class2 &);
    friend void display(class1 &, class2 &);
};

void swap (class1 & c1, class2 & c2)
{
    int temp=c1.x;
    c1.x=c2.y;
    c2.y=temp;
}

 void display(class1 & c1, class2 & c2)
{
    cout<<endl<<"x="<<c1.x<<"\t"<<"y="<<c2.y<<endl;
}



int main()
{
    class1 a;
    class2 b;
    a.get();
    b.input();

    display(a,b);

    swap(a,b);
    display(a,b);




    return 0;



}


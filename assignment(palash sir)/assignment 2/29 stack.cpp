#include<iostream>
using namespace std;

#define maxsize 100

class STACK
{
    int s[maxsize];
    int size;

public:
    STACK()
    {
        size=0;
    }
    STACK operator + (int a)
    {
        if(size==maxsize)
            cout<<"OVERFLOW"<<endl;
        else
        {

            s[size]=a;
            size=size+1;

        }
        return *this;
    }
    void operator --(int a)
    {
        //int x=s[size];
        size--;
        if(size<0)
        {
            cout<<"STACK IS EMPTY. CAN'T DELETE"<<endl;
            size++;
        }
    }

    friend ostream & operator <<(ostream & out, STACK ss)
    {
        if(ss.size==0)
            out<<"THE STACK IS EMPTY"<<endl;
        else
        {

            out<<"The STACK : ";
            for(int i=ss.size-1; i>=0; i--)
                cout<<ss.s[i]<<" ";
            out<<endl;
        }
    }
};



int main()
{
    STACK ss;
    ss=ss+5;
    cout<<ss<<endl;
    ss=ss+6;
    cout<<ss<<endl;
    ss=ss+9;
    cout<<ss<<endl;


    ss--;
    cout<<ss<<endl;
    ss--;
    cout<<ss<<endl;
    ss--;
    cout<<ss<<endl;
    ss--;
    cout<<ss<<endl;

    ss=ss+6;
    ss=ss+8;

    cout<<ss<<endl;

}

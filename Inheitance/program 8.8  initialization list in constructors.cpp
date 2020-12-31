#include<iostream>
using namespace std;

class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"alpha initialized"<<endl;
    }
    void show_alpha(void)
    {
        cout<<"x= "<<x<<endl;
    }
};

class beta
{
    float p,q;
public:
    beta(float a, float b) : p(a), q(b+p)  /*data members are initialized in the
                                           order of declaration, independent of
                                           the order of initialization list*/
    {
        cout<<"beta initialized"<<endl;
    }
    void show_beta(void)
    {
        cout<<"p= "<<p<<endl;
        cout<<"q= "<<q<<endl;
    }
};

class gama : public beta ,public alpha
{
    int m,n;
public:
    gama(int a, int b, float c): alpha(a*2),beta(c,c),m(a)
    {
        n=b;
        cout<<"gama initialized"<<endl;
    }
    void show_gama(void)
    {
        cout<<"m= "<<m<<endl;
        cout<<"n= "<<n<<endl;
    }

};

int main()
{
    gama g(2,4,2.5);
    cout<<endl;

    g.show_alpha();
    g.show_beta();
    g.show_gama();

    return 0;
}


#include<iostream>
using namespace std;

class sets
{
    int m,n;
    void read(void){cout<<"start";}

public:
    void input(void)
    {
        cout<<"Enter the values of m and m:"<<endl;
        cin>>m>>n;
    }
    void output(void)
    {

        cout<<"Largest value="<<largest()<<endl;
        //read();
    }

    int largest(void);
};

int main()
{
    sets s1,s2;
    s1.input();
    s1.output();
    //read();

    return 0;
}

int sets :: largest(void)
{
    if(m>=n)
        return m;
    else
        return n;
}


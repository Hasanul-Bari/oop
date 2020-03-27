#include<iostream>
using namespace std;

class sets
{
    int m,n;

public:
    void input(void)
    {
        cout<<"Enter the values of m and m:"<<endl;
        cin>>m>>n;

    }

    void output(void)
    {

        cout<<"Largest value="<<largest(m,n)<<endl;
    }



    int largest(int m, int n);
};

int sets :: largest(int m, int n)
{
    if(m>n)
        return m;
    else
        return n;
}

int main()
{
    sets s1,s2;
    s1.input();
    s1.output();
    return 0;
}



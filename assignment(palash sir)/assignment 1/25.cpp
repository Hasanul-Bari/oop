#include<iostream>
using namespace std;

class factorial
{
    int n;
    long long f;
public:
    void getdata()
    {
        cin>>n;
    }
    void fact()
    {
        f=1;
        for(int i=1; i<=n; i++)
            f=f*i;
    }
    void display()
    {
        cout<<"factorial of "<<n<<" is "<<f<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter number of integers you want to store: ";
    cin>>n;

    factorial p[n];
    for(int i=0; i<n;i++)
    {
        p[i].getdata();
        p[i].fact();
        p[i].display();
    }

}



#include<iostream>
using namespace std;

class student
{
    int sid;
    char name;
    int level;
    float marks;
    static float sum;
public:
    void get(void)
    {
       cin>>sid>>marks;
    }

    void put(void)
    {
           cout<<sid<<"\t"<<marks<<endl;
    }

    void av(void)
    {
        sum=sum+marks;
    }

    static void putavg(void)
    {
        cout<<"sum="<<sum<<endl<<"avg="<<sum/5<<endl;
    }
};

float student :: sum;

int main()
{
    student s[5];
    cout<<"Enter 5 objects"<<endl;
    for( int i=0; i<5; i++)
    {
        s[i].get();
    }

    cout<<"Entered objects are"<<endl;
    for( int i=0; i<5; i++)
    {
       s[i].put();
    }

    for(int i=0; i<5; i++)
    {
     s[i].av();
    }

    student :: putavg();





    return 0;


}


#include<iostream>
using namespace std;

class time
{
    int hours ;
    int minutes;
public:
    void gettime(int h, int m)
    {
        hours=h;
        minutes=m;
    }
    void puttime(void)
    {
        cout<<hours<<"\t"<<"hours"<<"\t"<<minutes<<"\t"<<"minutes"<<endl;
    }
    void sum(time,time);

};

void time :: sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}

int main()
{
    time T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,20);

    T3.sum(T1,T2);

    T1.puttime();
    T2.puttime();
    T3.puttime();






    return 0;
}

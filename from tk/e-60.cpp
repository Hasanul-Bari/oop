#include<iostream>
using namespace std;
class student
{
    int roll;
public:
    void get_roll(int x)
    {
        roll=x;
    }
    void put_roll()

    {
        cout<<"Student Roll: "<<roll<<endl;
    }
};
class test: public student
{
protected:
    float t1,t2;
public:
    void get_marks(float x,float y)
    {
        t1=x;
        t2=y;
    }
    void put_marks()
    {
        cout<<"Test 1 mark  "<<t1<<"\n"<<"Test 2 mark: "<<t2<<endl;
    }
};
class sports
{
protected:
    float sp;
public:
    void get_sp(float x)
    {
        sp=x;
    }
    void put_sp()
    {
        cout<<"Sports mark: "<<sp<<endl;
    }
};
class result: public test,public sports
{
    float total;
public:
    void disp();

};
void result::disp()
{
    total=t1+t2+sp;
    put_roll();
    put_marks();
    put_sp();
    cout<<"Total score :"<<total<<endl;

}
int main()
{
     result obj;
    obj.get_roll(101);
    obj.get_marks(80.5,82.3);
    obj.get_sp(9.5);
    obj.disp();
    return 0;

}

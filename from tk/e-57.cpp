///multilevel inheritance

#include<iostream>
using namespace std;
class stu
{
protected:
    int roll;
public:
    void get_roll(int);
    void put_roll();

};
void stu:: get_roll(int x)
{
    roll=x;

}
void stu :: put_roll()
{
    cout<<"Roll : "<<roll<<endl;
}
class test : public stu
{
protected:
    float m1,m2;
public:
    void get_marks(float,float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    m1=x;
    m2=y;
}
void test:: put_marks()
{
    cout<<"Marks of sub 1 :"<<m1<<endl;
    cout<<"Marks of sub 2 :"<<m2<<endl;
}
class result: public test

{
    float total;
public:
    void display();
};
void result:: display()
{
   total=m1+m2;
    put_roll();
    put_marks();
    cout<<"\nTotal: "<<total<<endl;
}

int main()
{
    result obj;
    obj.get_roll(101);
    obj.get_marks(53.3,70.1);
    obj.display();
    return 0;
}

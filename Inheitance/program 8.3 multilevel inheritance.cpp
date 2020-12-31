#include<iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int a)  { roll_number=a; }
    void put_number(void)   { cout<< "Roll Number: "<<roll_number<<endl; }

};

class test : public student
{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float a,float b)
    {
        sub1=a;
        sub2=b;
    }
    void put_marks(void)
    {
        cout<<"Marks in SUB1 ="<<sub1<<endl;
        cout<<"Marks in SUB2 ="<<sub2<<endl;
    }
};


class result :public test
{
    float total;
public:
    void display (void);
};


void result :: display (void)
{
    total=sub1+sub2;
    put_number();
    put_marks();
    cout<<"Total = "<<total<<endl;

}


int main()
{
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0, 59.5);

    student1.display();

    return 0;

}

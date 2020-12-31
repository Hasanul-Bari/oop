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

class test : virtual public student
{
protected:
    float part1;
    float part2;
public:
    void get_marks(float a,float b)
    {
        part1=a;
        part2=b;
    }
    void put_marks(void)
    {
        cout<<"Marks obtained  "<<endl;
        cout<<"part1 ="<<part1<<endl;
        cout<<"part2 ="<<part2<<endl;
    }
};

class sports :  public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score=s;
    }
    void put_score(void)
    {
        cout<<"Sports wt :"<<score<<endl<<endl;

    }
};


class result :public test,public sports
{
    float total;
public:
    void display (void);
};


void result :: display (void)
{
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();

    cout<<"Total score : = "<<total<<endl;

}


int main()
{
    result student1;
    student1.get_number(678);
    student1.get_marks(30.5,25.5);
    student1.get_score(7.0);
    student1.display();

    return 0;

}


#include<iostream>
using namespace std;

class STUDENT
{
    int ID;
    char name[20];
    int age;
public:
    void getdata()
    {
        cin>>ID>>name>>age;
    }
    int getage()
    {
        return age;
    }
};

class PGSTUDENT;
class UGSTUDENT : public STUDENT
{
    int semester_fees;
    float stipend;
public:
    void getu()
    {
        cout<<"Enter the details of undergraduate student"<<endl;
        getdata();
        cin>>semester_fees>>stipend;
    }
    friend void avg(UGSTUDENT us[5],PGSTUDENT ps[5]);

};

class PGSTUDENT : public STUDENT
{
    int semester_fees;
    float stipend;
public:
    void getp()
    {
        cout<<"Enter the details of postgraduate student"<<endl;
        getdata();
        cin>>semester_fees>>stipend;
    }
    friend void avg(UGSTUDENT us[5],PGSTUDENT ps[5]);

};

void avg(UGSTUDENT us[5],PGSTUDENT ps[5])
{
    double avgu,avgp,avgall;
    int sum=0,sumall=0;

    for(int i=0; i<5; i++)
        sum=sum+us[i].getage();

    sumall=sum;
    avgu=sum/5;
    sum=0;

    for(int i=0; i<5; i++)
        sum=sum+ps[i].getage();

    sumall=sumall+sum;
    avgp=sum/5;
    avgall=sumall/10;

    cout<<"Average age of undergraduate students  "<<avgu<<endl;
    cout<<"Average age of postgraduate students  "<<avgu<<endl;
    cout<<"Average age of both undergraduate and postgraduate students  "<<avgu<<endl;


}


int main()
{
    UGSTUDENT us[5];
    PGSTUDENT ps[5];

    for(int i=0; i<5; i++)
        us[i].getu();

    for(int i=0; i<5; i++)
        ps[i].getp();


    avg(us,ps);



}

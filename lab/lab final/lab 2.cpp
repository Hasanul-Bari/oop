#include<iostream>
using namespace std;

class person
{
    int id;
    string name;
public:
    void getdatap()
    {
        cin>>id>>name;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};

class employee : public person
{
    double salary;
public:
    void getdataemp()
    {
        cin>>salary;
    }
    double getsalary()
    {
        return salary;
    }
};


class teacher : public employee
{
    string faculty;
    string dept;
    int noc;
    string crs[5];
public:
    void getdatat()
    {
        cout<<"Enter id name salary of the teacher "<<endl;
        getdatap();
        getdataemp();
        cout<<"Enter faculty, dept and no of courses :"<<endl;
        cin>>faculty>>dept>>noc;
        cout<<"Enter "<<noc<<" course code"<<endl;
        for(int i=0; i<noc; i++)
            cin>>crs[i];
    }
    void displayt()
    {
        cout<<"id : "<<getid()<<endl;
        cout<<"Name : "<<getname()<<endl;
        cout<<"Salary : "<<getsalary()<<endl;
        cout<<"Faculty : "<<faculty<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"courses under this teacher :"<<endl;
        for(int i=0; i<noc; i++)
            cout<<crs[i]<<endl;

    }

};


int main()
{
    teacher t1;
    t1.getdatat();
    t1.displayt();
    return 0;
}

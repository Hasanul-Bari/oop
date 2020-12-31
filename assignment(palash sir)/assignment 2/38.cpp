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

class student : public person
{
    int teacherid;
    string teachername;
public:
    void getdatas()
    {
        cout<<"Enter id name teacherid teachername"<<endl;
        getdatap();
        cin>>teacherid>>teachername;
    }
};

class instructor : public employee
{
    int studentid[10];
    int n;
public:
    void getdatai()
    {
        cout<<"Enter id name salary of the instructor "<<endl;
        getdatap();
        getdataemp();
        cout<<"Enter the no of students under the instructor "<<endl;
        cin>>n;
        cout<<"Enter "<<n<<" students id"<<endl;
        for(int i=0; i<n; i++)
            cin>>studentid[i];
    }
    void displayi()
    {
        cout<<"id : "<<getid()<<endl;
        cout<<"Name : "<<getname()<<endl;
        cout<<"Salary : "<<getsalary()<<endl;
        cout<<"Student under his instructions are : "<<endl;
        for(int i=0; i<n; i++)
            cout<<studentid[i]<<endl;

    }

};


int main()
{
    instructor i1;
    i1.getdatai();
}

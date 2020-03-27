#include<iostream>
#include<fstream>

using namespace std;


class student
{
    char name[20],dept[4];
    int sid;
public:
    student()
    {
        cout<<"Enter details : "<<endl;
        cin>>name>>sid>>dept;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Student id : "<<sid<<endl;
        cout<<"Dept : "<<dept<<endl;
    }
    ~student() {}
};

int main()
{
    int n;
    cout<<"Enter the no of students"<<endl;
    cin>>n;
    student s[n];

    for(int i=0; i<n; i++)
    {
        cout<<endl<<"student "<<i+1<<endl;
        s[i].display();
    }




    return 0;
}


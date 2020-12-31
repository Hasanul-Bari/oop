#include<iostream>

using namespace std;


class student
{
private:
    char name[20];
    int sid;
    double gp[5];
    double gpa;
public:
    void getdata()
    {
        cout<<"Enter the details"<<endl;
        cin>>name>>sid;
    }
    void getgp()
    {
        cout<<"Enter grade point of 5 courses"<<endl;
        for(int i=0; i<5; i++)
            cin>>gp[i];
    }

    inline void gpa_cal();


    void display()
    {
        cout<<name<<" "<<sid<<" "<<gpa<<endl;
    }
};



 void student :: gpa_cal()
{
        double sum=0;
        for(int i=0; i<5; i++)
        {
            sum=sum+gp[i];
        }
        gpa=sum/5;

}

int main()
{
    cout<<"Enter the no of students : "<<endl;
    int n;
    cin>>n;

    student s[n];

    for(int i=0; i<n; i++)
    {
        s[i].getdata();
        s[i].getgp();
        s[i].gpa_cal();
    }

    for(int i=0; i<n; i++)
    {
        cout<<"student "<<i+1<<endl;
        s[i].display();
    }




    return 0;
}



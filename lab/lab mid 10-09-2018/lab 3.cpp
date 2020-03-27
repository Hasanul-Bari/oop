#include<iostream>

using namespace std;


class student
{
    char name[20];
    int sid;
    double mark[5];
    double gpa;
public:
    void getdata()
    {
        cout<<"Enter the details"<<endl;
        cin>>name>>sid;
    }

    inline void getmark();

    void gpa_cal();

    void display()
    {
        cout<<name<<" "<<sid<<" "<<gpa<<endl;
    }
};

void student :: getmark()
{
    cout<<"Enter marks of 5 courses"<<endl;
    for(int i=0; i<5; i++)
        cin>>mark[i];
}

void student :: gpa_cal()
{
    double sum=0,gp;

    for(int i=0; i<5; i++)
    {

        if(mark[i]>=80 && mark[i]<100)          gp=4.00;
        else if(mark[i]>=75 && mark[i]<80)      gp=3.75;
        else if(mark[i]>=70 && mark[i]<75)      gp=3.5;
        else if(mark[i]>=65 && mark[i]<70)      gp=3.25;
        else if(mark[i]>=60 && mark[i]<65)      gp=3.00;
        else if(mark[i]>=55 && mark[i]<60)      gp=2.75;
        else if(mark[i]>=50 && mark[i]<55)      gp=2.5;
        else if(mark[i]>=45 && mark[i]<50)      gp=2.25;
        else if(mark[i]>=40 && mark[i]<45)      gp=2.00;
        else if(mark[i]<40)                     gp=0.0;


        sum=sum+gp;
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
        s[i].getmark();
        s[i].gpa_cal();
    }

    for(int i=0; i<n; i++)
    {
        cout<<"student "<<i+1<<endl;
        s[i].display();
    }




    return 0;
}


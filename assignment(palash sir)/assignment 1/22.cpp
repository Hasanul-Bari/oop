#include<iostream>

using namespace std;


class student
{
private:
    char name[20],sem[3],deg[3];
    int sid, level;
    float gp[5];
public:
    void getdata()
    {
        cout<<"Enter the details"<<endl;
        cin>>name>>sid>>level>>sem>>deg;
    }
    void getgp()
    {
        cout<<"Enter grade point of 5 courses"<<endl;
        for(int i=0; i<5; i++)
            cin>>gp[i];
    }
    void gpa_cal();
};

int main()
{
    student s1,s2,s3,s[50];
    s1.getdata();
    s1.getgp();


    s1.gpa_cal();

    return 0;
}

void student :: gpa_cal()
{
    float gpa=0;
    for(int i=0; i<5; i++)
    {
        gpa=gpa+(gp[i]*2);
    }
    gpa=gpa/10;

    cout<<gpa<<"\n";
}


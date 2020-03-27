#include<iostream>

using namespace std;


class student
{
private:
    char name[20],sem[3],deg[3];
public:
    int sid, level;
    float marks[5];

    void gpa(float mark[]);
};

int main()
{
    student s1,s2,s3,s[50];
    cin>>s1.level>>s2.sid;
    cout<<s1.level<<"\n"<<s2.sid;

    for(int i=0;i<5; i++)
    {
        cin>>s1.marks[i];
    }
    s1.gpa(s1.marks);

    return 0;
}

void student :: gpa(float mark[])
{
    float gp=0;
    for(int i=0; i<5; i++)
    {
        gp=gp+(mark[i]*2);
    }
    gp=gp/10;

    cout<<gp<<"\n";
}

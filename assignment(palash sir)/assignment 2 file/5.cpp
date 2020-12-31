#include<iostream>
#include<fstream>

using namespace std;


class student
{
private:
    char name[20],sem[3],deg[3];
    int sid, level;
    float gp[5];
public:
    student()
    {
        ifstream in("input.txt");
        in>>name>>sid>>level>>sem>>deg;
    }
    void getgp()
    {
        ifstream in("gpa.txt");
        for(int i=0; i<5; i++)
            in>>gp[i];
    }
    void gpa_cal();
    ~student() {}
};

int main()
{
    student s1;

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
    ofstream out("output.txt");
    out<<name<<" "<<sid<<" "<<level<<" "<<sem<<" "<<deg<<endl;;
    out<<gpa<<"\n";
}



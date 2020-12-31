#include<iostream>
using namespace std;

class student
{
    int sid;
    char name;
    int level;
    float marks;
    float gp;
public:
    void get(void)
    {
       cin>>sid>>marks;
    }
    void put(void)
    {
           cout<<sid<<"\t"<<marks<<endl;
    }




};

int main()
{
    student s[5];
    cout<<"Enter 5 objects"<<endl;
    for( int i=0; i<5; i++)
    {
        s[i].get();
    }
    cout<<"Entered objects are"<<endl;
    for( int i=0; i<5; i++)
    {
       s[i].put();

    }

    return 0;


}

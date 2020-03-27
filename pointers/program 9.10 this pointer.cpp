#include<iostream>
#include<cstring>

using namespace std;

class person
{
    char name[20];
    float age;
public:
    person( char *s, float a)
    {
        strcpy(name,s);
        age=a;
    }

    person  greater(person & x)
    {
        if(x.age>=age)
            return x;
        else
            return *this;
    }

    void display()
    {
        cout<<"name : "<<name<<endl<<"age : "<<age<<endl;
    }
};

int main()
{
    person p1("John",37.50),p2("Ahmed",29.0),p3("Hebber",40.25);

    person p=p1.greater(p3);
    cout<<"Elder person is : "<<endl;
    p.display();

    p=p1.greater(p2);
    cout<<"Elder person is : "<<endl;
    p.display();

    return 0;
}

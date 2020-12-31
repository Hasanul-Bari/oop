#include<iostream>
using namespace std;

class professor
{
protected:
    professor() { cout<<"professor"<<endl;}
};


class researcher
{
protected:
    researcher() { cout<<"researcher"<<endl;}
};

class teacher
{
protected:
    teacher() { cout<<"teacher"<<endl;}
};

class myprofessor : public teacher, public virtual researcher
{
public:
    myprofessor()  { cout<<"myprofessor"<<endl;}
};


int main()
{
    myprofessor obj1;
    return 0;
}


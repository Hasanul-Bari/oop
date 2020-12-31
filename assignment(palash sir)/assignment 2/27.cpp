#include<iostream>
#include<string.h>
using namespace std;

class stringoperation
{
    char *str;
    int len;
public:
    stringoperation()
    {
        len=0;
        str=0;
    }
    stringoperation(const char *s)
    {
        len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
    }
    stringoperation(stringoperation & x)
    {
        len=x.len;
        str=new char[len+1];
        strcpy(str,x.str);
        cout<<"**"<<endl;
    }

    friend stringoperation operator +(stringoperation & a, stringoperation &b)
    {
        stringoperation temp;
        temp.len=a.len+b.len;
        temp.str=new char[temp.len+1];
        strcpy(temp.str,a.str);
        strcat(temp.str,b.str);

        return temp;
    }
    void display()
    {
        cout<<str<<endl;
    }



};

int main()
{
    stringoperation s1,s2("hasanul");
    stringoperation s3("bari"),s4;
    s1=s3;

    s4=s2+s1;

    s1.display();
    s2.display();
    s3.display();
    s4.display();


}

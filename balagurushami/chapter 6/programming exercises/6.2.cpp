#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char *str;
    int length;
public:
    String()
    {
        length=0;
        str=new char[length+1];
    }
    String(char  *s)
    {
        length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);
    }
    String add (String &a, String &b)
    {
        String c;
        c.length=a.length+b.length;
        c.str=new char[c.length+1];
        strcpy(str,a.str);
        strcat(str,b.str);
    }

    void display()
    {
        cout<<str<<endl;
    }
};

int main()
{
    String s1,s4;
    String s2("Hasanul"),s3("Bari");
    s1=s3;
    s4=s4.add(s2,s1);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
}

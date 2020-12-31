#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char *p;
    int len;
public:
    String()                   ///null string
    {
        len=0;
        p=0;
    }
    String(const char *s)     ///creating string with char array
    {
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
    }
    String(const String & s)        ///copy constructor
    {
        len=s.len;
        p=new char[len+1];
        strcpy(p,s.p);
    }
    ~String(){delete p;}

    friend String operator +(const String &s , const String &t );
    friend int operator <=(const String &s, const String &t);
    friend void show(String s)
    {
        cout<<s.p;
    }
};

String operator +(const String &s, const String &t)
{
   String temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return temp;
}

int operator <=(const String &s,const String &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<=n)
        return 1;
    else
        return 0;
}

int main()
{
    String s1="New";
    String s2="York";
    String s3="Delhi";
    String string1,string2,string3;
    string1=s1;
    string2=s2;
    string3=s1+s3;

    cout<<endl<<"string1 = ";
    show(string1);
    cout<<endl<<"string2 = ";
    show(string2);
    cout<<endl<<"string3 = ";
    show(string3);

    cout<<endl<<endl;
    if(string1<=string3)
    {
        show(string1);
        cout<<" smaller than ";
        show(string3);
        cout<<endl;
    }
    else
    {
        show(string3);
        cout<<" smaller than ";
        show(string1);
        cout<<endl;
    }
    return 0;
}

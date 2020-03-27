#include<iostream>
#include<string.h>
using namespace std;

class error
{
    int err_code;
    char *err_desc;
public:
    error(int c,const char *d)
    {
        err_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }

    void err_display()
    {
        cout<<endl<<"Error code: "<<err_code<<endl<<"Error description: "<<err_desc;
    }
};

int main()
{
    try
    {
        throw error(99,"Test exceptation");
    }
    catch(error e)
    {
        cout<<"Exception caught successfully";
        e.err_display();
    }
}

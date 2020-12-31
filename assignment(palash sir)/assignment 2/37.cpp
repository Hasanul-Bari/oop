#include<iostream>
using namespace std;

void readNames(char *months[12])
{
    char s[100][100];

    for(int i=0; i<12; i++)
    {
        cin>>s[i];
        months[i]=s[i];

    }


}

void writeNames(char *months[12])
{
    for(int i=0; i<12; i++)
    {
        cout<<months[i]<<endl;
    }
}

int main()
{
    char *months[12];

    readNames(months);
    cout<<endl;
    writeNames(months);
}

/*
january
february
march
april
may
june
july
august
september
october
november
december
*/

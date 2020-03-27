#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char *string1="c++";
    const char *string2="programming";
    int m=strlen(string1);
    int n=strlen(string2);


    for(int i=1; i<n; i++)
    {
        cout.write(string2,i);
        cout<<endl;
    }

    for(int i=n; i>0; i--)
    {
        cout.write(string2,i);
        cout<<endl;
    }

    cout.write(string1,m).write(string2,n);

    cout<<endl;

    cout.write(string1,10);

}

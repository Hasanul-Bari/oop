#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    bool a[10];
    memset(a,0,sizeof(a));

    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    memset(a,-1,sizeof(a));

    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    memset(a,5,sizeof(a));    ///can assign 0 and -1 only

    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    char b[10];
    memset(b,'h',sizeof(a));    ///can assign 0 and -1 only

    for(int i=0; i<10; i++)
        cout<<b[i]<<" ";
    cout<<endl;

    memset(b,'t',6);

    for(int i=0; i<10; i++)
        cout<<b[i]<<" ";
    cout<<endl;


}


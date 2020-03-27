#include<iostream>
#include<string.h>

using namespace std;

int main()
{
        const char *ptr[13]={
        "books",
        "television"
        "computer"
        "sports"
        };

    char str[25];
    cout<<"Enter your favorite leisure pursuits : ";
    //cin>>str;

    for(int i=0; i<4; i++)
        cout<<ptr[i]<<endl;



    for(int i=0; i<4; i++)
    {
        if(!strcmp(str,ptr[i]))
        {
            cout<<endl<<"Your favorite pursuit is available here"<<endl;
            break;
        }
        else if(i==4)
        {
            cout<<endl<<"Your favorite pursuit is not available here"<<endl;
        }
    }

    return 0;
}


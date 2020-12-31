#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

int main()
{
    char str[]="\nC++ is better than C";
    int len=strlen(str);

    char *substr=new char[len];
    cout<<"The main string is : "<<str;
    cout<<endl<<endl<<"Enter the substring to be searched : ";
    cin>>substr;

    int i,j,k,len2=strlen(substr);
    for(i=0; i<len; i++)
    {
         k=i;
        for(j=0; j<len2; j++)
        {
            if(str[k]==substr[j])
            {
                if(j==len2-1)
                {
                    cout<<endl<<"The substring is present in the main string"<<endl;
                    exit (0);
                }
                k++;
            }
            else
                break;
        }
    }
    if(i==len)
        cout<<endl<<"The substring is not present in the main string"<<endl;

    return 0;
}

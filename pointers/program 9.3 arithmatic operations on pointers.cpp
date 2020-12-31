#include<iostream>

using namespace std;

int main()
{
    int num[]={56,75,22,18,90};
    int *ptr;
    ;
    cout<<"The array values are: "<<endl;
    for(int i=0; i<5; i++)
        cout<<num[i]<<endl;

    ptr=num;

    cout<<endl<<"value of ptr : "<<*ptr<<endl;
    ptr++;
    cout<<endl<<"value of ptr++ : "<<*ptr<<endl;
    ptr--;
    cout<<endl<<"value of ptr-- : "<<*ptr<<endl;
    ptr=ptr+2;
    cout<<endl<<"value of ptr+2 : "<<*ptr<<endl;
    ptr=ptr-1;
    cout<<endl<<"value of ptr-1 : "<<*ptr<<endl;
    ptr+=3;
    cout<<endl<<"value of ptr+3 : "<<*ptr<<endl;
    ptr-=2;
    cout<<endl<<"value of ptr-2 : "<<*ptr<<endl;

    return 0;
}



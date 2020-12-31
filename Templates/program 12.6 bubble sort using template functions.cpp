#include<iostream>
using namespace std;

template <class H>
void Swap(H & a,H & b)
{
    H temp;
    temp=a;
    a=b;
    b=temp;
}

template <class T>
void bubble(T a[],int n)
{
    for(int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
            if(a[j]>a[j+1])
                Swap(a[j],a[j+1]);
}



int main()
{
    int x[5]={10,50,30,40,20};
    float y[5] ={1.1,5.5,3.3,4.4,2.2};

    bubble(x,5);
    bubble(y,5);

    cout<<"Sorted x-array: ";
    for(int i=0; i<5; i++)
        cout<<x[i]<<" ";

    cout<<endl;
    cout<<"Sorted y-array: ";
    for(int i=0; i<5; i++)
        cout<<y[i]<<" ";
}

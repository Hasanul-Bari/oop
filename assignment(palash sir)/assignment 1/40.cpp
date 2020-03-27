#include<iostream>
using namespace std;

class Vector
{
    float *a;
    int size;
public:
    void create ()
    {
        cout<<"Enter the size of vector: ";
        cin>>size;
        a=new float [size];
        cout<<"Enter "<<size<<" elements"<<endl;
        for(int i=0; i<size; i++)
            cin>>a[i];
    }

    void modify()
    {
        cout<<"Enter the position of the element you want to modify : ";
        int x;
        cin>>x;
        cout<<"Enter the modified value: ";
        int v;
        cin>>v;
        a[x-1]=v;
    }

    void multiply(int x)
    {
         for(int i=0; i<size; i++)
            a[i]=a[i]*x;
    }
    void display()
    {
        cout<<"(";
        for(int i=0; i<size-1; i++)
        {
            cout<<a[i]<<" , ";
        }
        cout<<a[size-1]<<")"<<endl;
    }



};


int main()
{
    Vector v;
    v.create();
    v.modify();

    v.display();
    cout<<"Enter a scaler: ";
    int a;
    cin>>a;
    v.multiply(a);
    v.display();
}

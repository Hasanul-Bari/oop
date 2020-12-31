#include<iostream>
using namespace std;

int main()
{
    int *p,n,sum=0;
    cout<<"Enter array size: ";
    cin>>n;
    p=new int[n];

    cout<<"Enter "<<n<<" elements"<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }

    cout<<endl<<"The elements are"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"sum="<<sum<<endl;

    delete [] p;
    return 0;
}

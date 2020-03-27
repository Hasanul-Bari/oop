#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"Enter array size :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements"<<endl;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"The array"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;

    sort(arr,arr+n);

    cout<<"The sorted array"<<endl;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;

    return 0;



}

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"Precision set to 3 digits"<<endl<<endl;
    cout.precision(3);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);

    cout.width(10);
    cout<<"Value";
    cout.width(15);
    cout<<"Sqrt of value"<<endl;

    for(int n=1; n<=5; n++)
    {
        cout.width(8);
        cout<<n;
        cout.width(13);
        cout<<sqrt(n)<<endl;
    }

    cout<<endl<<"Precision set to 5 digits"<<endl<<endl;
    cout.precision(5);
    cout<<"sqrt(10) = "<<sqrt(10)<<endl<<endl;

    cout.precision(0);                                     ///default
    cout<<"sqrt(10) = "<<sqrt(10)<<endl<<endl;

    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

double power(double m ,int n=2)
{
    double a;
    a=pow(m,n);
    return a;
}

int main()
{
    double x;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>x;

    cout<<"Enter a power of the number"<<endl;
    cin>>n;

    cout<<"The square of the number is "<<power(x)<<endl;
    cout<<"The "<<n<<" power of the number is "<<power(x,n)<<endl;

    return 0;



}

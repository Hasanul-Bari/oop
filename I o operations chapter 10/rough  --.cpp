#include<iostream>
using namespace std;

int main()
{
    float a;
    cin>>a;

    cout<<"cout.setf(ios::left, ios::adjustfield) = ";
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(15);
    cout<<a<<endl;

    cout<<"cout.setf(ios::right, ios::adjustfield) = ";
    cout.fill('*');
    cout.setf(ios::right, ios::adjustfield);
    cout.width(15);
    cout<<a<<endl;

    cout<<"cout.setf(ios::internal, ios::adjustfield) = ";
    cout.fill('*');
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(15);
    cout<<a<<endl;

    cout.precision(3);
    cout.fill('*');
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(15);
    cout<<a<<endl;


}


#include<iostream>
using namespace std;
int main()
{
    int sum=100;

    int & total=sum;

    const int & n=50;

    const char & a='\n';

    cout<<sum<<a<<total<<a;

    cout<<a<<n<<endl;

    return 0;
}

#include<iostream>
using namespace std;

int gvalue=10;

void extra()
{
    cout<<gvalue<< ' ';
}

int main()
{
    extra();
    {
        int gvalue=30;
        cout<<gvalue<< ' ';
        cout<< :: gvalue<< ' ';

    }

    return 1;
}

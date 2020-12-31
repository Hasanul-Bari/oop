#include<iostream>
using namespace std;

ostream & symbol(ostream & output)
{
    return output<<"\tTk";
}

int main()
{
    int x=10;
    cout<<x<<symbol;

    return 0;
}

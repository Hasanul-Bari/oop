#include<iostream>
using namespace std;

class A
{
    int i;
};

class AB :virtual A
{
    int j;
};
class AC: A
{
    int k;
};
class ABAC: AB,AC
{
    int l;
};



int main()
{
    ABAC abac;
    cout<<"sizeof ABAC:"<<sizeof(abac);
}


#include<iostream>
using namespace std;

int main()
{
    int count=0;
    char c;

    cout<<"Input text"<<endl;

    cin.get(c);

    while(c!='\n')
    {
        cout.put(c);
        count++;
        c=cin.get();
    }

    cout<<endl<<"Number of characters = "<<count<<endl;
    return 0;
}

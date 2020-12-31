#include<bits/stdc++.h>
using namespace std;

void printdivisor(int n)
{
    cout<<"Divisors of "<<n<<endl;
    for(int i=n; i>0; i--)
    {
        if(n%i==0)
            cout<<i<<endl;
    }

}

int main()
{
    int n;
    cout<<"Enter a positive integer to print its divisors\n";
    cout<<"(If the integer is negative or zero the program will terminate) \n";

    cin>>n;
    if(n>0)
        printdivisor(n);
    else
        return 0;

    int x;


    while(1)
    {
        cout<<"Do you wish to enter another integer\n";
        cout<<"press 1 to continue\n";
        cout<<"press 2 to exit\n";
        cin>>x;

        if(x==1)
        {
            cout<<"Enter a positive integer to print its divisors\n";
            cin>>n;

            if(n<=0)
            {
                cout<<"\nThe input is unacceptable\n";
                cout<<"Try again\n";
            }
            else
                printdivisor(n);

        }
        else if(x==2)
            break;

    }



    return 0;
}

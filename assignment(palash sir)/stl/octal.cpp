#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class Octal
{
    int num;
public:

    Octal() {}

    Octal( int x )                    // int to octal converion.
    {
        int rem=0,sum=0,p=0;
        while( x>0 )
        {
            rem=x%8;
            sum=sum+rem*pow(10,p);
            p++;
            x=x/8;
        }
        num=sum;
    }

    int operator + ( int k )             // octal to int
    {
        int sum=0,rem=0,h,p=0;
        h=num;

        while( h>0 )
        {
            rem=h%10;
            sum=sum+rem*pow(8,p);
            p++;
            h=h/10;
        }

        return(sum+k );
    }

    friend ostream & operator << (ostream &x,Octal  h );
};

ostream & operator << ( ostream & x,Octal & h )
{
    cout<<h.num;
    return(x);
}

int main()
{

    int x;
    clrscr();

    cout<<"\nEnter an int no : ";
    cin>>x;

    Octal h=x;

    cout<<"\nEnter the value of k : ";
    int k;
    cin>>k;
    int y=h+k;

    cout<<"\nh = "<<h<<"\nk= "<<k<<"\ny = h+k = "<<y;

    getch();
    return 0;

}

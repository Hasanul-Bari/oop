#include<iostream>
#include<cmath>
using namespace std;


class OCTAL
{
    int num;
public:
    OCTAL() {}
    OCTAL(int x)                    // int to octal converion.
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

    friend ostream & operator << (ostream &os,OCTAL  h )
    {
        os<<h.num<<endl;
        return os;
    }
};


	int main()
	{

		int x;
        cout<<"\nEnter an int no : ";
		cin>>x;

		OCTAL h=x;



		cout<<h<<x<<endl;

		cout<<"\nEnter the value of k : ";
		int k;
		cin>>k;
		int y=h+k;

		cout<<"\nh = "<<h<<"\nk= "<<k<<"\ny = h+k = "<<y;

                return 0;

	}

#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:
    integer(){m=0,n=0;}
    integer(int x, int y)
    {
        m=x;
        n=y;
    }
    void display()
    {
        cout<<m<<endl<<n<<endl;
    }
};

int main()
{
   integer i1(10,100),i2;
   i1.display();
   i2.display();


   return 0;
}




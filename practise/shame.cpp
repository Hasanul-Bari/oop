#include<iostream>
using namespace std;
class integer
{
public:
    int m,n;
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
   integer i1(0,100);
   i1.display();
   cout<<i1.m<<endl<<i1.n<<endl;

   return 0;
}

#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:

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


   return 0;
}


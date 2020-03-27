#include<iostream>
using namespace std;

void test (int x)  throw(int,char)
{
    if(x==0)
        throw 'X';
    else if(x==1)
        throw x;
    else if(x==-1)
        throw 1.0;
    cout<<"End of function block"<<endl;

}
int main()
{
    try
    {
        cout<<"Testing throw restrictions"<<endl;
        cout<<"x == 0"<<endl;
        test(0);

        cout<<"x == 1"<<endl;
        test(1);

        cout<<"x == -1"<<endl;
        test(-1);

        cout<<"x == 2"<<endl;
        test(2);
    }

    catch(char c)
    {
        cout<<"caught a character"<<endl;
    }
    catch(int m)
    {
        cout<<"caught a integer"<<endl;
    }
    catch(double e)
    {
        cout<<"caught a double"<<endl;
    }

     cout<<"End of try-catch system"<<endl<<endl;

}

#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"try"<<endl;
        throw 1.5;
    }

    catch(int e)
    {
        cout<<"exception(int) "<<e<<endl;
    }
    catch(double e)
    {
        cout<<"exception(double) "<<e<<endl;
    }
    catch(char e)
    {
        cout<<"exception(char) "<<e<<endl;
    }



}

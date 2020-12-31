#include<iostream>
using namespace std;

class item
{
private:
    static int count;
public:
    item()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
    int  *getcountaddress()
    {
        return &count;
    }
};

int item :: count;

main()
{
    item objitem1;
    item objitem2;

    cout<<objitem1.getcount() <<' ';
    cout<<objitem2.getcount() <<' ';


    cout<<objitem1.getcountaddress() <<' ';
    cout<<objitem2.getcountaddress() <<' ';

}

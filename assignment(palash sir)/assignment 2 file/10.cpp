#include<iostream>
#include<fstream>
using namespace std;

class item
{
    static int count;
    int number;
public:
    item()
    {
        ifstream in("input.txt");
        in>>number;
        count++;
    }
    void putcount(void)
    {
        fstream out("output.txt",ios::app);
        out<<"count="<<count<<endl;
    }
    ~item() {}

};

int item :: count;

int main()
{
    item a;
    a.putcount();
    item b;
    b.putcount();
    item c;
    c.putcount();


    return 0;
}


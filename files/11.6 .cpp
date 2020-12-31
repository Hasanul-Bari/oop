#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;
class inventory
{
    char name[10];
    int code;
    float cost;
public:
    void readdata(void );
    void writedata(void);
};
void inventory:: readdata(void)
{
    cout<<"Enter name :  ";
    cin>>name;
    cout<<"Enter code :  ";
    cin>>code;
    cout<<"Enter cost :  ";
    cin>>cost;
}
void inventory :: writedata(void )
{
    cout<<setiosflags(ios::left)<<setw(10)<<name;
    cout<<setiosflags(ios::right)<<setw(10)<<code;
    cout<<setprecision(2)<<setw(10)<<cost<<endl;
}
int main()
{
    inventory item[3];
    fstream file;

    file.open("stock.dat",ios::in|ios::out);
    /*if(!file)
        cout<<"not createad"<<endl;*/
    cout<<"Enter details for three items "<<endl;

    for(int i=0; i<3; i++)
    {
        item[i].readdata();
        file.write((char *) &item[i],sizeof(item[i]));
    }
    file.seekg(0);

    cout<<"output"<<endl;
    for(int i=0; i<3; i++)
    {

        file.read((char *)& item[i],sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}


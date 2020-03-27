#include<iostream>
#include<fstream>


using namespace std;

int main()
{
    ofstream fout("ITEM.txt");

    cout<<"Enter item name : ";
    char name[30];
    cin>>name;

    fout<<name<<endl;

    cout<<"Enter item cost : ";
    float cost;
    cin>>cost;

    fout<<cost<<endl;

    fout.close();

    ifstream fin("ITEM.txt");
    char a[30];
    float b;
    fin>>a>>b;

    cout<<a<<endl<<b<<endl;

    fin.close();


}



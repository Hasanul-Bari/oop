#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("country.txt");

    fout<<"United states of America"<<endl;
    fout<<"United Kingdom"<<endl;
    fout<<"South Korea"<<endl;

    fout.close();



    fout.open("capital.txt");

    fout<<"Washington"<<endl;
    fout<<"London"<<endl;
    fout<<"Seoul"<<endl;

    fout.close();

    char line[80];

    ifstream fin;
    fin.open("country.txt");

    cout<<"Contents of the country file"<<endl;

    while(fin)
    {
        fin.getline(line,80);
        cout<<line<<endl;
    }
    fin.close();


    fin.open("capital.txt");

    cout<<"Contents of the capital file"<<endl;

    while(fin)
    {
        fin.getline(line,80);
        cout<<line<<endl;
    }
    fin.close();


    return 0;


}

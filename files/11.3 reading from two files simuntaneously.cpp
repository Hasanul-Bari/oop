#include<iostream>
#include<fstream>
#include<cstdlib>


using namespace std;

int main()
{
    char line[30];

    ifstream fin1,fin2;
    fin1.open("country.txt");
    fin2.open("capital.txt");

    for(int i=0; i<10; i++)
    {
        if(fin1.eof() !=0)
        {
            cout<<"Exit from country"<<endl;
            exit(1);


        }

        fin1.getline(line,80);
        cout<<"Capital of "<<line<<" ";

        if(fin2.eof() !=0)
        {
            cout<<"Exit from capital"<<endl;
            //break;
            exit(1);
        }

        fin2.getline(line,80);
        cout<<line<<endl;
    }

    return 0;
}

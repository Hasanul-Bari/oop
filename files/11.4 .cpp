#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char str[80];
    cout<<"enter a string :"<<endl;
    cin>>str;
    int len=strlen(str);

    fstream file;
    cout<<"Opening the txt file and storing the string in it"<<endl;
    file.open("TEXT.txt",ios::in | ios:: out | ios:: trunc);

    /*if(!file)
        cout<<"not createad"<<endl;*/


    //file.seekp(10);
    for(int i=0;i<len;i++)
        file.put(str[i]);

    //cout<<file.tellp()<<endl;
   // cout<<file.tellg()<<endl;

    file.seekg(0);
    char ch;
    cout<<"Reading the file contents : ";
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    //cout<<file.tellp();
    return 0;
}

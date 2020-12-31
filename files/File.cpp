#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  ifstream input;
  fstream mix;
  char ch,chr[50],match[50];
  //int a1,a2,c=0,f=1,h1,h2,i,j=1,k=0,l[25],n=0,s=1,t,x1=1,x2=1,y,in1=1,in2=1,it,wr1=0,wr2=0,mk=1,v1=0,v2=0,v3=0;
  input.open("d:\\input.txt");
  mix.open("d:\\mix.txt",ios::out);

  //input.get(head);
  while(input.get(ch))
	 {
        mix<<ch;
	 }
  input.close();
  mix.close();

    return 0;
}



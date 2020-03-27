#include<iostream>
#include<malloc.h>
using namespace std;

char* allocateMemory();

int main()
{
   char* str;
   str=allocateMemory();
   cout<<str;
   delete str;
   str=" ";
   cout<<str;
}

char* allocateMemory()
{
    char* str= "Memory allocation test, ";
    return str;
}


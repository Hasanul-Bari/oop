#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[10];
	float m1,m2,m3;
	float avg;
public:

	inline void getinfo();
    void compute();
	inline void display();
};

void Student :: getinfo()
{
	cout<<endl<<"Enter the Student id\n";
	cin>>id;

	cout<<endl<<"Enter the Student Name:\n";
	cin>>name;

	cout<<endl<<"Enter the marks in three subjects:\n";
	cin>>m1>>m2>>m3;
}

void Student :: compute()
{
	if(m1<=m2 && m1<=m3)
		avg=(m2+m3)/2.0;
	else if(m2<=m3 && m2<=m1)
		avg=(m1+m3)/2.0;
	else if(m3<=m1 && m3<=m2)
		avg=(m1+m2)/2.0;
}

void Student :: display()
{
	cout<<endl<<name<<"  details\n"<<endl;

	cout<<"ID is "<<id;
	cout<<endl<<"Name is "<<name;
	cout<<endl<<"Marks1 is "<<m1;
	cout<<endl<<"Marks2 is "<<m2;
	cout<<endl<<"Marks3 is "<<m3;
	cout<<endl<<"Average of best two marks is "<<avg<<endl<<endl;
}

int main()
{


	int n,i;

	cout<<"\nEnter the number of Students\n";
	cin>>n;
	Student s[n];

	for(i=0;i<n;i++)
		s[i].getinfo();

	for(i=0;i<n;i++)
		s[i].compute();

	for(i=0;i<n;i++)
		s[i].display();

	return 0;
}

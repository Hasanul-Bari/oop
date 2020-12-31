#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[10];
	float m1,m2,m3;
	float avg;
public:

	void read_data();
	void compute();
	void write_data();
};

void Student :: read_data()
{
	cout<<"\nEnter the Student id\n";
	cin>>id;

	cout<<"\nEnter the Student Name:\n";
	cin>>name;

	cout<<"\nEnter the marks in three subjects:\n";
	cin>>m1>>m2>>m3;
}

void Student :: compute()
{
	if(m1<=m2 && m1<=m3)
		avg=(m2+m3)/2.0;
	else if(m2<=m3 && m2<=m1)
		avg=(m1+m3)/2.0;
	else
		avg=(m1+m2)/2.0;
}

void Student :: write_data()
{
	cout<<endl<<name<<"  details\n"<<endl;

	cout<<"ID is "<<id;
	cout<<"\nName is "<<name;
	cout<<"\nMarks1 is "<<m1;
	cout<<"\nMarks2 is "<<m2;
	cout<<"\nMarks3 is "<<m3;
	cout<<"\nAverage of, best of two subjects is "<<avg<<endl<<endl;
}

int main()
{


	int n,i;

	cout<<"Enter the number of Students\n";
	cin>>n;
	Student s[n];

	for(i=0;i<n;i++)
		s[i].read_data();

	for(i=0;i<n;i++)
		s[i].compute();

	for(i=0;i<n;i++)
		s[i].write_data();

	return 0;
}

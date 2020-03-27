///multiple inheritance
#include<iostream>
using namespace std;
 class A
 {
 protected:
    int m;
 public:
    void get_m(int);
 };
 void A::get_m(int x)
 {
     m=x;
 }
  class B
 {
 protected:
    int n;
 public:
    void get_n(int);
 };
 void B::get_n(int x)
 {
     n=x;
 }
 class C: public A, public B
 {
     int c;
 public:
    void add();
    void display();
 };
 void C:: add()
 {
     c=m+n;
     cout<<"Addition : "<<c<<endl;
 }
 void C::display()
 {
     cout<<"Value of M: "<<m<<endl;
     cout<<"Value of N: "<<n<<endl;

 }
 int main()
 {
     C obj;
     obj.get_m(100);
     obj.get_n(200);

     obj.display();
       obj.add();



 }

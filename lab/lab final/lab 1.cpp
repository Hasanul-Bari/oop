#include<iostream>
using namespace std;

class Temperature
{
    float degrees;
    char scale;
public:
    Temperature()                       { degrees=0;  scale='C';}
    Temperature(float t)              { degrees=t; scale='C'; }
    Temperature(char c)               { degrees=0; scale=c; }
    Temperature(float t,char c)       { degrees=t; scale=c;}

    friend Temperature conversion(Temperature t)
    {
        Temperature temp;
        if(t.scale=='F')
        {
            temp.scale='C';
            temp.degrees=(5*(t.degrees-32))/ 9;
        }
        else
        {
            temp.scale='F';
            temp.degrees=(9*(t.degrees/5) + 32);
        }

        return temp;
    }

    void setvalues(float t)          {  degrees=t;   scale='C';}
    void setvalues(char c)           {  degrees=0;   scale=c; }
    void setvalues(float t, char c)  {  degrees=t;   scale=c;}


    friend int comparison (Temperature a, Temperature b);

    void display()
    {
        if(scale=='C')  cout<<degrees<<" degrees C"<<endl;
        else  cout<<degrees<<" degrees F"<<endl;
    }

};

int comparison (Temperature a, Temperature b)
{
    if(a.scale=='F')
        a.degrees=(5*(a.degrees-32))/ 9;

    if(b.scale=='F')
        b.degrees=(5*(b.degrees-32))/ 9;

    if(a.degrees==b.degrees)
        return 0;
    else if(a.degrees>b.degrees)
        return 1;
    else if (a.degrees<b.degrees)
        return -1;

}


int main()
{
    Temperature t(2,'C'),t1,t2(65,'F'),t3 ,t4(84,'C');
    t3=conversion(t2);
    cout<<"t : ";
    t.display();
    cout<<"t2 : ";
    t2.display();
    cout<<"t3 : ";
    t3.display();

    cout<<comparison(t4,t2)<<endl;
    //cout<<comparison(t1,t)<<endl;


    return 0;


}

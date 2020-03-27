#include<iostream>
using namespace std;

int const  Size=3;

template<class T>
class vector1
{
    T *v;
public:
    vector1()
    {
       v=new T[Size];
       for(int i=0; i<Size; i++)
            v[i]=0;
    }

    void getdata(T *a)
    {
        for(int i=0; i<Size; i++)
            v[i]=a[i];
    }

    T operator *(vector1 &y)
    {
        T sum=0;
        for(int i=0; i<Size; i++)
        {
            sum+=this->v[i]*y.v[i];
        }
        return sum;
    }

    void display(void)
    {
        for(int i=0; i<Size; i++)
            cout<<v[i]<<"\t";
        cout<<endl;
    }
};

int main()
{
    int x[3]={1,2,3};
    int y[3]={4,5,6};

    vector1<int> v1;
    vector1<int> v2;



    v1.getdata(x);             ///v1=x   kaj kre na
    v2.getdata(y);             ///v2=y   kaj kre na

    cout<<"v1 = ";
    v1.display();

    cout<<"v2 = ";
    v2.display();

    cout<<"v1 X v2 = "<<v1*v2;

    return 0;

}

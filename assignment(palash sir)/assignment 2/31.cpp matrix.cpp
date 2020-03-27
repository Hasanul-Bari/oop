#include<iostream>
using namespace std;

class MATRIX
{
    int m[100][100];
    int r,c;

public:
    MATRIX(){}
    MATRIX(int R,int C)
    {
        //cout<<"Enter the rows and columns: ";
        //cin>>r>>c;
        r=R;
        c=C;
        cout<<"Enter the elements: "<<endl;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>m[i][j];
    }

    friend bool operator == (MATRIX M1, MATRIX M2)
    {
        if(M1.r==M2.r && M1.c==M2.c)
            return true;
        else
            return false;
    }

    MATRIX operator + (MATRIX a)
    {
        MATRIX temp;

        temp.r=r;
        temp.c=c;

        for(int i=0;i<temp.r;i++)
            for(int j=0;j<temp.c;j++)
                temp.m[i][j]=m[i][j]+a.m[i][j];


        return temp;
    }

    MATRIX operator - (MATRIX a)
    {
        MATRIX temp;

        temp.r=r;
        temp.c=c;

        for(int i=0;i<temp.r;i++)
            for(int j=0;j<temp.c;j++)
                temp.m[i][j]=m[i][j]-a.m[i][j];


        return temp;
    }

    friend ostream & operator << (ostream & os, MATRIX a)
    {
        for(int i=0;i<a.r;i++)
        {
            for(int j=0;j<a.c;j++)
            {
                os<<a.m[i][j]<<" ";
            }
            cout<<endl;
        }

    }
};


int main()
{
      MATRIX m1(3,3),m2(3,3),m3,m4;

      if(m1==m2)
      {
          cout<<"The two matrices are compatible"<<endl;

          m3=m1+m2;
          cout<<m3;

          m4=m1-m2;
          cout<<m4;
      }
      else
        cout<<"error"<<endl;
}

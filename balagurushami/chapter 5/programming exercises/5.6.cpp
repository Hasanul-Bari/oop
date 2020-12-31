#include<iostream>
using namespace std;

class matrix
{
    int m[3][3];
public:
    void read(void)
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<"m["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }

    void display(void)
    {
        for(int i=0; i<3; i++)
        {
            cout<<endl;
            for(int j=0; j<3; j++)
            {
                cout<<m[i][j]<<"\t";
            }
        }
    }

    friend matrix multiplication (matrix, matrix);
};


matrix multiplication (matrix m1, matrix m2)
{
    matrix m3;
    int sum=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                sum=sum+(m1.m[i][k]*m2.m[k][j]);
            }
            m3.m[i][j]=sum;
            sum=0;
        }
    }
        return m3;
}

int main()
{
    matrix mat1, mat2, mat3;
    cout<<"Enter the first matrix"<<endl;
    mat1.read();
    cout<<endl<<"Enter the second matrix"<<endl;
    mat2.read();
    cout<<endl<<"First matrix:"<<endl;
    mat1.display();
    cout<<endl<<"Second matrix:"<<endl;
    mat2.display();


    mat3 = multiplication(mat1,mat2);
    cout<<endl<<"transposed matrix:";
    mat3.display();

    return 0;

}


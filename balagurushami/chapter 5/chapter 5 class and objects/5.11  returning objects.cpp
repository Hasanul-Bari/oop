#include<iostream>
using namespace std;

class matrix
{
    int m[3][3];
public:
    void read(void)
    {
        cout<<"Enter th elements of the 3X3 matrix"<<endl;
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

    friend matrix trans (matrix);
};


matrix trans (matrix m1)
{
    matrix m2;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            m2.m[i][j]=m1.m[j][i];

        return m2;
}

int main()
{
    matrix mat1, mat2;
    mat1.read();
    cout<<endl<<"You entered the following matrix:";
    mat1.display();

    mat2 = trans(mat1);
    cout<<endl<<"transposed matrix:";
    mat2.display();

    return 0;

}

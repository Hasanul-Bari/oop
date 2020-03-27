#include<stdio.h>

int main()
{
    int n;
    printf("Enter dimension of Magic Square (only odd dimension >=1 and and <=15 accepted) : ");
    scanf("%d",&n);
    if(n%2==0 || n<1 || n>15)
    {
        printf("Invalid input\n");
        printf("Valid values are odd integers between 1 and 15\n");
        return 0;
    }
    int a[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j]=0;

    int row=n-1,column=n/2,tempr,tempc;

    for(int k=1; k<=n*n; k++)
    {


        a[row][column]=k;

        tempr=row;
        tempc=column;
        row++;
        column++;
        if(row==n)
            row=0;
        if(column==n)
            column=0;

        if(a[row][column]!=0)
        {
            row=tempr;
            column=tempc;
            row--;
        }


    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    int m=n*(n*n+1)/2;
    printf("Magic constant %d\n",m);






    return 0;
}

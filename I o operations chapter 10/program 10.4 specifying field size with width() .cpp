#include<iostream>
using namespace std;

int main()
{
    int items[4]={10,8,12,15};
    int cost[4]={75,100,60,99};

    cout.width(5);
    cout<<"Items";

    cout.width(5);
    cout<<"cost";

    cout.width(15);
    cout<<"Total values"<<endl;

    int sum=0;

    for(int i=0; i<4; i++)
    {
        cout.width(5);
        cout<<items[i];

        cout.width(5);
        cout<<cost[i];

        int value=items[i]*cost[i];

        cout.width(15);
        cout<<value<<"\n";

        sum=sum+value;
    }
    cout<<endl<<"Grand Total =";
    cout.width(2);
    cout<<sum<<endl;

    return 0;



}



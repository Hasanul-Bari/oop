#include<iostream>
using namespace std;



class items
{
    int itemcode[50];
    float itemprice[50];
    int count;
public:
    void cnt(void)  {count=0;}
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitems(void);
};

void items :: getitem(void)
{
    cout<<"Enter item code :";
    cin>>itemcode[count];

    cout<<"Enter item cost :";
    cin>>itemprice[count];
    count++;

}

void items :: displaysum(void)
{
    float sum=0;
    for(int i=0; i<count; i++)
        sum=sum+itemprice[i];
        cout<<endl<<"Total value :"<<sum<<endl;
}


void items :: remove(void)
{
    int a;
    cout<<"Enter item code:";
    cin>>a;

    for(int i=0; i<count; i++)
        if(itemcode[i]==a)
    itemprice[i]=0;
}

void items :: displayitems(void)
{
    cout<<endl<<"Code    price"<<endl;
     for(int i=0; i<count; i++)
     {
         cout<<endl<<itemcode[i];
         cout<<"     "<<itemprice[i];
     }
     cout<<endl;
}


int main()
{
    items order;
    order.cnt();
    int x;
    do
    {
        cout<<endl<<"You can do the following; Enter appropriate number"<<endl;
        cout<<endl<<"Add an item";
        cout<<endl<<"Display total value";
        cout<<endl<<"Delete an item";
        cout<<endl<<"Display all items";
        cout<<endl<<"Quit";
        cout<<endl<<"what is your option";

        cin>>x;


        switch(x)
        {
            case 1:  order.getitem();     break;
            case 2: order.displaysum();   break;
            case 3: order.remove();       break;
            case 4: order.displayitems(); break;
            case 5: break;
            default: cout<<"Error in input; try again"<<endl;


        }
    }while(x!=5);

    return 0;
}



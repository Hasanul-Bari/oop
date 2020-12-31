#include<iostream>
using namespace std;

enum shape
{
    circle,
    rectangle,
    triangle,
};

int main()
{
    cout<<"Enter shape code:";
    int code,r,x,y;
    float a;
    cin>>code;
    while(code>=circle && code<=triangle )
    {
        switch(code)
        {
        case circle:

            cout<<"Enter the radius of circle = ";
            cin>>r;
            a=3.14*r*r;
            break;

        case rectangle:
            cout<<"Enter the length and width of rectangle = ";
            cin>>x>>y;
            a=x*y;
            break;

        case triangle:
            cout<<"Enter the length and width of rectangle = ";
            cin>>x>>y;
            a=(x*y)/2;
            break;

        }
        cout<<a<<endl;;
        cout<<"Enter shape code:";
        cin>>code;

    }



    return 0;
}

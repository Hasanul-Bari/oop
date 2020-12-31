#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int s;
    cout<<"Enter the size of the vector : ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"The vector is"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"empty or not : "<<v.empty()<<endl;

    v.erase(v.begin()+3);             ///deletes 4th element

    cout<<"The vector is"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"size="<<v.size()<<endl;



    v.erase(v.begin()+1,v.begin()+3);      ///deletes 2nd to 3rd elements

    cout<<"The vector is"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"size="<<v.size()<<endl;

    cout<<v.capacity()<<endl;


    v.insert(v.begin()+5,1,9);               ///inserts 9 at 6th position
    cout<<"The vector is"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<endl;
    }

    /*v.reverse();                             kaj kre na..
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<endl;
    }*/
    return 0;
}

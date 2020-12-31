#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void display( vector<int> &a)
{
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    cout<<"Initial size = "<<v.size()<<endl;

    int x;
    cout<<"Enter five integers: ";
    for(int i=0; i<5; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    cout<<"Size after adding 5 values: ";
    cout<<v.size()<<endl;

    cout<<"Current contents"<<endl;

    display(v);

    v.push_back(6.6);
    cout<<endl<<"size  = "<<v.size()<<endl;
    cout<<"contents now"<<endl;

    display(v);


    vector <int> :: iterator itr=v.begin();
    itr=itr+3;
    v.insert(itr,9);
    cout<<"contents after inserting"<<endl;

    display(v);

    v.erase(v.begin()+3,v.begin()+5);
    cout<<"contents after inserting"<<endl;

    display(v);

    cout<<"END"<<endl;

    return 0;
}

#include<iostream>
#include<map>

using namespace std;

int main()
{
    string name;
    int number;

    map<string,int> phone;
    cout<<"Enter three sets of name and number "<<endl;

    for(int i=0; i<3; i++)
    {
        cin>>name;
        cin>>number;
        phone[name]=number;
    }

    phone["Jacob"]=number;

    phone.insert(pair<string,int> ("Bose",5555));

    int n=phone.size();
    cout<<"size of map = "<<n<<endl;

    cout<<"List of telephone numbers"<<endl;
    map<string,int> :: iterator it;

    for(it=phone.begin(); it!=phone.end(); it++)
    {
        cout<<it->first<<"   "<<it->second<<endl;
    }

    cout<<endl<<"Enter name : ";
    cin>>name;
    number =phone[name];
    cout<<"Number : "<<number<<endl;

    return 0;
}

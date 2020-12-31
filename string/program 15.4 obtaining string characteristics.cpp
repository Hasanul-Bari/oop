#include<iostreaM>
using namespace std;

void display(string &str)
{
    cout<<"Size = "<<str.size()<<endl;
    cout<<"Length = "<<str.length()<<endl;
    cout<<"Capacity = "<<str.capacity()<<endl;
    cout<<"Maximum size = "<<str.max_size()<<endl;
    cout<<"Empty: "<<str.empty()<<endl<<endl;
}

int main()
{
    string s;
    cout<<"Initial status"<<endl;
    display(s);

    cout<<"Enter a string"<<endl;
    getline(cin,s);

    cout<<"status now"<<endl;
    display(s);

    s.resize(100);
    cout<<"status after resizing"<<endl;
    display(s);


    return 0;


}

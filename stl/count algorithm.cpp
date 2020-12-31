#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
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



   int cnt;

   cnt = count(v.begin(), v.end(), 3);

   cout << "Number 3 occurs " << cnt << " times." << endl;

   return 0;
}

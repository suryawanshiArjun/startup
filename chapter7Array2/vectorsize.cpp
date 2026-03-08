#include <iostream>
#include <vector>
using namespace std;
int main()
{
  //  vector <int> v(7);         // with given size
    // cout<<v.size()<<"\n";      
    // cout<<v.capacity()<<"\n"; 

    vector <int> v;
    cout<<"Enter the numbers:";

    for(int i=0; i<7; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<7; i++)
    {
        cout<<v[i]<<" ";
    }
}
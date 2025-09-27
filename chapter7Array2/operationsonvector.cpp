#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v; // you not need to mention the size
    // inserting the elements.
    v.push_back(55);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(55);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(55);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
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
    // for update 
    v[0]=88;
    // for accessing.
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}
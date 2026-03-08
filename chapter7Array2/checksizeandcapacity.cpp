#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v; // you not need to mention the size
    // inserting the elements.
    // cout <<"The size of vector is:"<<endl;
    // v.push_back(55);
    // cout<<v.size()<<" ";
    // v.push_back(4);
    // cout<<v.size()<<" ";
    // v.push_back(2);
    // cout<<v.size()<<" ";
    // v.push_back(1);
    // cout<<v.size()<<" ";
    // cout<<endl;


    cout<<"The capacity of the vector is:"<<endl;
    v.push_back(55);
    cout<<v.capacity()<<" ";
    v.push_back(4);
    cout<<v.capacity()<<" ";
    v.push_back(2);
    cout<<v.capacity()<<" ";
    v.push_back(1);
    cout<<v.capacity()<<" ";
}
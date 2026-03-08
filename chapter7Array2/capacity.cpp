#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
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
    cout<<"size is:"<<v.size()<<"\n";
    cout<<"capacity is:"<<v.capacity()<<"\n";
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size is:"<<v.size()<<"\n";
    cout<<"capacity is:"<<v.capacity()<<"\n";
}
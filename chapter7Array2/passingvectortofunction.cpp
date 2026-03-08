#include <iostream>
#include <vector>
using namespace std;
void change(vector <int> &a){
    a[0]=500;
}
int main()
{
    vector <int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
}
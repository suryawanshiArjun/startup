#include <iostream>
#include<vector>
using namespace std;
void reverse(vector <int> &v, vector<int> &v2)
{
    int n=v.size();
    for(int i=0; i<v.size(); i++)
    {
        v2[n-1-i]=v[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    vector <int> v2(v.size());
    reverse(v,v2);
    cout<<"Reverse:";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n=5;
    vector <int> v(n);
    cout<<"Enter the elements:";
    for(int i=0 ; i<5; i++)
    {
        cin>>v[i];
    }
    vector <int> v2(v.size());
    for(int i=0; i<n; i++)
    {
        v2[n-1-i]=v[i];
    } 
    cout<<"Reverse array:";
    for(int i=0; i<n; i++)
    {
        cout<<v2[i]<<" ";
    }
}
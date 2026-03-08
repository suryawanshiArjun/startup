#include <iostream>
#include<vector>
using namespace std;
void reversepart(int i, int j,vector <int> &v)
{
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n; 
    cout<<"Enter the size of vector:";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter the elements in array:";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    reversepart(0,2,v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
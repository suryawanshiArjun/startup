#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter theelements in array:";
    for(int i=0; i<v.size();i++)
    {
        cin>>v[i];
    }
    int i=0;
    int j=n-i-1;
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse array:";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
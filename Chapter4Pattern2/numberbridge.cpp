#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1; i<=(2*n-1); i++)
    {
        cout<<i;
    }
    cout <<"\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<j;
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout<<" ";
        }
        for(int j=(n+i); j<=(2*n-1);j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
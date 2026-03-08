#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<< "Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k;
        }
        for(int x=(i-1); x>=1;x--)
        {
            cout<<x;
        }
        cout<<"\n";
    }
}
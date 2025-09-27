#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:";
    cin >> n;
    for(int m=-1; m<=(2*n-1); m++)
    {
        cout<<"*";
    }
    cout<<"\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n+1-i); j++)
        {
            cout<<"*";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=(n+1-i); j++)
        {
            cout<<"*";
        }
        cout <<"\n";
    }
}
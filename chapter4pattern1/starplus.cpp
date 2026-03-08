#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout << "Enter the number:";
    cin >> n;
    a=(n/2)+1;
    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=n; j++)
        {
           if(a==i || a==j)
           cout<<"*";
           else cout<<" ";
        }
        cout <<"\n";
    }
}
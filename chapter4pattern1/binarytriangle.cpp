#include<iostream>
using namespace std;
int main()
{
    int n,a=5;
    cout << "Enter the number:";
    cin >> n;
    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j) %2 ==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout <<"\n";
    }
}
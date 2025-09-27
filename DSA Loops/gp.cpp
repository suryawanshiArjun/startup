#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:";
    cin >>n;
    int a=2;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a*=3;
    }
}
#include <iostream>
using namespace std;
int pow(int x, int n)
{
    if(n==1 || n==0) return x;
    int ans=pow(x,n/2);
    if(n%2==0) return ans*ans;
    if(n%2!=0) return ans*ans*x;
    return ans*ans;
}
int main()
{
    int x,n;
    cout<<"Enter the base :";
    cin>>x;
    cout<<"Enter the exponent:";
    cin>>n;
    cout<<pow(x,n);
}
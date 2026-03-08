#include <iostream>
using namespace std;
int main()
{
    int n; //decleration 
    n=6; //initialization
    int m;
    m=16;
    cout<<n+m <<"\n";
    n=4, m = 6;
    int sum=n+m;
    sum=sum+12;
    cout<<sum<< endl;
    sum *=10;
    cout<<sum<< endl;
    sum-=9;
    cout<<sum<< endl;
    sum+=4;
    cout<<sum;
}
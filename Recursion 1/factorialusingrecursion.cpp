#include <iostream>
using namespace std;
int fun(int n)
{
    if (n==0) return 1;
    return n*fun(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Factorial is: "<<fun(n);
}
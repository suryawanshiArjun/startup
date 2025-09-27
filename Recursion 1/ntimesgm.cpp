#include <iostream>
using namespace std;
void fun(int n)
{
    if(n==0) return;
    cout<<"good morning"<<"\n";
    fun(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    fun(n); 
}
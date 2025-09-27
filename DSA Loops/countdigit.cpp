#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:";
    cin >>n;
    int count=0;
    if(n<0)
    n=-n;
    int a=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    if(a==0) cout<<1; 
    else cout <<count;
}
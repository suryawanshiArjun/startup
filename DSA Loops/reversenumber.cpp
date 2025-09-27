#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int reverse=0;
    int reminder=0;
    while(n>0)
    {
        reverse=n%10;
        reminder=reminder*10+reverse;
        n=n/10;
    }
    cout <<reminder;
}
#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number:";
     cin >> n;
     int sum=0;
     int last=0;
     while(n>0)
     {
        last= n%10;
        sum=sum+last;
        n=n/10;
     }
     cout <<sum;
}
#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the money:";
    cin>>n;
    int count=0;
    if(n>=500)
    {
        x=n/500;
        count+=x;
        n=n%500;
        cout<<x<<" note of 500"<<"\n";
    }
    if(n>=200)
    {
        x=n/200;
        count+=x;
        n=n%200;
        cout<<x<<" note of 200"<<"\n";
    }
    if(n>=100)
    {
        x=n/100;
        count+=x;
        n=n%100;
        cout<<x<<" note of 100"<<"\n";
    }
    if(n>=50)
    {
        x=n/50;
        count+=x;
        n=n%50;
        cout<<x<<" note of 50"<<"\n";
    }
        if(n>=20)
        {
            x=n/20;
            count+=x;
            n=n%20;
            cout<<x<<" note of 20"<<"\n";
        }
        if(n>=10)
        {
            x=n/10;
            count+=x;
            n=n%10;
            cout<<x<<" note of 10"<<"\n";
        }
        
        if(n>=1)
        {
            x=n/1;
            count+=x;
            cout<<x<<" note of 1"<<"\n";
        }
        cout<<count;
return 0;
}
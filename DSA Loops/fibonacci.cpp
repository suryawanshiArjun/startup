#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number:";
    cin>>n;
    int first=1;
    int second=0;
    int next =0;
    for(int i=0; i<n; i++)
    {
        next=first+second;
        first=second;
        second=next;
        cout<<next<<" ";
    }
}
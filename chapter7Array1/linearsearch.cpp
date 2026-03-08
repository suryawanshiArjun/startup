#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[n];
    int flag=1;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number to search:";
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(x==arr[i])
        {
            cout<<i;
            flag=0;
            break;
        }
    }
    if(flag!=0)
    cout<<"Element not found:";
}
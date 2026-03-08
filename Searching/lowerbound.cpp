#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter to find the lower bound:";
    cin>>x;
    int low=0;
    int high=n-1;
    int flag=1;
    while(low<=high)
    {
        int mid =low+(high-low)/2;
        if(arr[mid]==x)
        {
            flag=0;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(flag==1) cout<<arr[high];
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    int low=0;
    int high=n-1;
    int mid;
    int idx=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            idx=mid;
            break;
        }
        else if(arr[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    if(idx!=-1) cout<<"found at "<<idx<<".";
    else cout<<"Not found.";
    return 0;
}
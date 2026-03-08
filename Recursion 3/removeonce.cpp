#include <iostream>
using namespace std;
void removeones(int arr[], int n, int idx)
{
    if(idx==n)
    {
        return;
    }
    if(arr[idx]!=1)
    cout<<arr[idx]<<" ";
    removeones(arr,n,idx+1);
}
int main()
{
    int arr[] = {1,2,3,4,1,5,1,6,2,7,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeones(arr,n,0);
}
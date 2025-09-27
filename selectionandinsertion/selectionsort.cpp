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
    // selection sort.
    for(int i=0; i<n-1; i++)
    {
        int min=INT8_MAX;
        int minidx=-1;
        for(int j=i; j<n; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
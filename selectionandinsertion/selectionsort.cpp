#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // selectionsort  code logic
    for(int i=0; i<n-1; i++)
    {
        int min=INT8_MAX;
        int minindex=-1;
        for(int j=i; j<n; j++)
        {
            if(arr[j] < min)
            {
                min=arr[j];
                minindex=j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}
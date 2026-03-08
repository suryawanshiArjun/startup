#include <iostream>
<<<<<<< HEAD
#include <climits>
=======
>>>>>>> 9d8e5db342dbf569f8b6d82ea5838dad2419f35b
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
<<<<<<< HEAD
    cout<<"Enter the elements of array:";
=======
    cout<<"Enter the elements in array:";
>>>>>>> 9d8e5db342dbf569f8b6d82ea5838dad2419f35b
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
<<<<<<< HEAD

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
=======
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
>>>>>>> 9d8e5db342dbf569f8b6d82ea5838dad2419f35b
}
#include <iostream>
using namespace std;
int main()
{
    int m; 
    cout<<"Enter the size of array:";
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    // bubble sort.
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<m-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }
}
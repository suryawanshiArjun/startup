#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(max< arr[i])
        {
            max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=0; i<n; i++)
    {
        if(smax<arr[i] && arr[i]!= max)
        {
            smax=arr[i];
        }
    }
    cout<<"The max element is: " <<max<<"\n";
    cout<<"The max element is: " <<smax;
}
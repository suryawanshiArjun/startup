#include <iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,7,8,9,4,5};
    //input
    cout<<"Enter the array elements:";
    for(int i=0; i<7;i++)
    {
        cin>>arr[i];
    }
    //output.
    for(int i=0; i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
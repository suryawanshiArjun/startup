#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
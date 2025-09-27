#include <iostream>
using namespace std;
void display(int arr[],int n, int i)
{
    if(i==n) return;
    cout<<arr[i]<<"\n";
    display(arr,n,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}
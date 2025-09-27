#include <iostream>
using namespace std;
void display(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void change(int a[], int size)
{
    a[4]=143;
    cout<<"\n";
}
int main(){
    int arr[]={1,4,8,9,4};
    int size= sizeof(arr)/sizeof(arr[2]);
    cout<<"The size of array is: "<<size<<"\n";
    display(arr, size);
    change(arr,size);
    display(arr,size);
    
}


#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int* ptr = arr;           // gives address
    cout<<ptr<<"\n";
    // int* ptr = &arr;           // gives error
    // cout<<ptr;
    int* ptr1 = &arr[0];           // gives address
    cout<<ptr;
//     int* ptr = arr[0];           // gives error
//     cout<<ptr;
}
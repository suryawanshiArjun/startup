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

    int target;
    cout<<"Enter the element you want to find:";
    cin>>target;
    int flag=1;
    for(int i=0; i<n; i++)
    {
        if(target==arr[i])
        flag=0;
        break;
    }
    if(flag==0) cout<<"Present.";
    else cout<<"Not present";
    return 0;
}
// first occurence
#include <iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,2,3,3,3,3,4,4,4,4,5,5,5,6};
    int n = 15;
    int x=3;
    bool flag =0;
    int low=0;
    int high=(n-1);
    while(low<=high)
    {
    int mid=low+(high-low)/2;
        if(arr[mid] == x)
        {
            if(arr[mid -1] != x) 
            {
                flag = 1;
                cout<<mid;
                break;
            }
            else high = mid-1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else 
        low=mid+1;
    }
    if(flag ==0 )
    {
        cout<<-1;
    }
    return 0;
}
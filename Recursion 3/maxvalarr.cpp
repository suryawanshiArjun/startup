#include <iostream>
#include <climits>
using namespace std;

void maxval(int arr[], int n, int i, int max)
{
    if(i == n)
    {
        cout << max;
        return;
    }
    if(max < arr[i])
        max = arr[i];
    maxval(arr, n, i + 1, max); 
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxval(arr, n, 0, INT_MIN);
}
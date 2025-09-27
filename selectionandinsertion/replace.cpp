#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[]= {20,12,21,8,15};
    int n=5;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(n, 0);
    int x=0;
    for(int i=0; i<n; i++)
    {
        int min=INT8_MAX;
        int idx=-1;
        for(int j=0; j<n; j++)
        {
            if(v[j]==1) continue;
            else
            {
                if(min>arr[j])
                {
                    min=arr[j];
                    idx=j;
                }
            }
        }
        arr[idx]=x;
        v[idx]=1;
        x++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
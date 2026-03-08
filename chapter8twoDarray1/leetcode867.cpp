#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows an columns:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements in array:";
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int t[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0 ;j<n;j++)
        {
            t[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0 ;j<n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements in array:";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int arr2[m][n];
    int res[m][n];
    cout<<"Enter the elements in array2:";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>arr2[i][j];
        }
    }
    // int sum=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
           res[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
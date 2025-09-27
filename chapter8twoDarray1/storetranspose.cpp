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
    cout<<endl;
    int t[n][m];
    for(int j=0;j<n;j++)
    {
        for(int i=0; i<m; i++)
        {
            t[j][i]=arr[i][j];
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0; i<m; i++)
        {
            cout<<t[j][i]<<" ";
        }
        cout<<endl;
    }
}
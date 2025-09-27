#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the number of students:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the roll and makrs:";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
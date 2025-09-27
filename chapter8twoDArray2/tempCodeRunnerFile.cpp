#include <iostream>
using namespace std;
int main()
{
    int m; 
    int n;
    cout<<"Enter the no of rows:";
    cin>>m;
    cout<<"Enterthe no of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxr=m-1;
    int maxc=n-1;
    int minr =0; 
    int minc=0;
    while(maxr<minr && minc<maxc)
    {
        for(int j=0;j<=maxc;j++)
        {
            cout<<arr[minr][j];
        }
        if(minc>maxc && minr>maxr)
        minr++;
        for(int i=minr; i<=maxr; i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        if(minc>maxc && minr>maxr)
        maxc--;
        for(int j=maxc; j>=0;j--)
        {
            cout<<arr[maxr][j]<<" ";
        }
        if(minc>maxc && minr>maxr)
        maxc--;
        for(int i=maxr; i>=minr;i--)
        {
            cout<<arr[i][minc]<<" ";
        }
        if(minc>maxc && minr>maxr)
        minc++;
    }
}
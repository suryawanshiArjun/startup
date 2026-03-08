#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows of 1st matrix:";
    cin>>m;
    int n;
    cout<<"Enter the column of 1st matrix:";
    cin>>n;
    int p;
    cout<<"Enter the rows of 2nd matrix:";
    cin>>p;
    int q;
    cout<<"Enter the column of 2nd matrix :";
    cin>>q;
    if(n==p)
    {
        int a[m][n];
        cout<<"Enter the elements in first matrix:";
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the elements in the second matrix:";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<q; j++)
            {
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                res[i][j]=0;
                for(int k=0; k<p;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        // int res[m][q];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"The matrix cannot be multiplied:";
    }
}
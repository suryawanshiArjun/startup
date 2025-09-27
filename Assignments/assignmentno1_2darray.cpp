// Q1.write a matrix for write 10 at every index in 5x5 matrix:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5][5];
//     for(int i=0; i<5;i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             arr[i][j]=10;
//         }
//     }
//     for(int i=0; i<5;i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

// Q.2Write a program to add two matrices and save the result in one of the given matrices/.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m,n;
//     cout<<"Enter the no of rows:";
//     cin>>m;
//     cout<<"Enter the no of columns:";
//     cin>>n;
//     int arr1[m][n];
//     for(int i=0; i<m;i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cin>>arr1[i][j];
//         }
//     }
//     int arr2[m][n];
//     for(int i=0; i<m;i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cin>>arr2[i][j];
//         }
//     }
//     for(int i=0; i<m;i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             arr1[i][j]+=arr2[i][j];
//             cout<<arr1[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"Enter the no of rows:";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns:";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }  
//     int max=-1;
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(max<arr[i][j])
//             {
//                 max=arr[i][j];
//             }
//         }
//     } 
//     cout<<max;
// }

// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"Enter the no of rows:";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns:";
//     cin>>n;
//     int arr[m][n];
//     for(int i=1; i<=m; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }  
//     int sum=0;
//     int minr=1;
//     int rowindex=-1;
//     int max=-1000000;
//     for(int i=minr; i<=m; i++)
//     {
//         int rowsum=0;
//         for(int j=1; j<=n; j++)
//         {
//             rowsum+=arr[i][j];
//         }
//         if(rowsum>max)
//         {
//             max=rowsum;
//             rowindex=i;
//         }
//     }
//     cout<<"Row with maximum sum:"<<rowindex<<"\n";
//     cout<<"The maximum sum is:"<<max;
// }


/*Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the 
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...] /**/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the no of rows:";
    cin>>m;
    int n;
    cout<<"Enter the no of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>(n/2) || i<(n/2))
            {
                cout<<" ";
            }
            if(i==(m/2) || j==(n/2))
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

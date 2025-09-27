//Q1. Write a program to print the elements of both the diagonals in a square matrix.
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
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(i==j && (i+j)==(n-1))
//             {
//                 cout<<" ";
//             }
//             if(i==j || (i+j)==(n-1))
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//Q.2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
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
//     int maxc=n-1;
//     for(int i=maxc; i>=0; i--)
//     {
//         for(int j=0; j<m;j++)
//         {
//             cout<<arr[j][i]<<" ";
//         }
//         maxc--;
//         cout<<"\n";
//     }
// }

// Q3.Write a program to print the matrix in wave form.
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
//     int minr=0;
//     int minc=0;
//     int maxc=n-1;
//     int maxr=m-1;
//     while(minc<=maxr)
//     {
//         for(int i=maxr; i>=0; i--)
//         {
//             cout<<arr[i][minc]<<" ";
//         }
//         if(minc>=maxc) break;
//         minc++;
//         for(int i=0; i<=maxr; i++)
//         {
//             cout<<arr[i][minc]<<" ";
//         }
//         if(minc>=maxc) break;
//         minc++;
//     }
//     return 0;
// }

//Q4.Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// #include <iostream>
// using namespace std;
// int main()
// {
//      int m;
//      cout<<"Enter the matrix rows and columns:";
//      cin>>m;
//      int arr[m][m];
//      for(int i=0; i<m; i++)
//      {
//           for(int j=0; j<m; j++)
//           {
//                cin>>arr[i][j];
//           }
//      }
//      int minr=0;
//      int minc=0;
//      int maxr=m-1;
//      int maxc=m-1;
//      while(minc<=maxc && minr<=maxr)
//      {
//           for(int j=minc; j<=maxc; j++)
//           {
//                cout<<arr[minr][j]<<" ";
//           }
//           if(minc>maxc || minr> maxr)
//           break;
//           minr++;
//           for(int i=minr; i<=maxr; i++)
//           {
//                cout<<arr[i][maxc]<<" ";
//           }
//           if(minc>maxc || minr>maxr)
//           break;
//           maxc--;
//           for(int j=maxc; j>=minc; j--)
//           {
//                cout<<arr[maxr][j]<<" ";
//           }
//           if(minc>maxc || minr>maxr)
//           break;
//           maxr--;
//           for(int i=maxr; i>=minr; i--)
//           {
//                cout<<arr[i][minc]<<" ";
//           }
//           if(minc>maxc || minr>maxr)
//           break;
//           minc++;
//      }
// }


// Q5. 
// #include <iostream>
// using namespace std;
// int main(){
//   int a[][2] = {{1,2},{3,4}}; //it is compulsory to give the jth column if we not give the row it will run.
//   int i, j;
//  for (i = 0; i < 2; i++)
//  for (j = 0; j < 2; j++)
//       cout << a[i][j]>>" ";
//  return 0;
//  }

//      Assignment no 3.
//  Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the no of rows and columns: ";
    cin >> m;

    int arr[100][100];
    int row[100]={0}, col[100]={0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
          {
               cin >> arr[i][j];
          }
    }

    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
          {
            if(arr[i][j]==0)
              {
                row[i]=1;
                col[j]=1;
              }
          } 

    for(int i=0;i<m;i++)
    {
          for(int j=0;j<m;j++)
          {
               if(row[i]==1 || col[j]==1)
               {
                    arr[i][j]=0;
               }
          }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
    }

    return 0;
}

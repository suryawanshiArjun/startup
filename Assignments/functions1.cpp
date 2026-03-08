//Q1.Write a function to print squares of n natural numbers.
// #include <iostream>
// using namespace std;
// int square(int num)
// {
//     int result=num*num;
// }
// void firstsquares(int n)
// {
//     for(int i=1; i<=n; i++)
//     {
//         cout<<i<<" square is "<<square(i)<<"\n";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     firstsquares(n);
//     return 0;
// }

// Q2.Write a function to take the radius of a circle as an argument and return its area.
// #include <iostream>
// using namespace std;
// float area(int n)
// {
//     float area=3.14*n*n;
//     return area;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the radius:";
//     cin>>n;
//     cout<<area(n);
//     return 0;
// }

// Q.3  Given two numbers a and b, write a function to print all odd numbers between them.
#include <iostream>
using namespace std;
void evennumbers(int n, int num)
{
    {
        for(int i=n; i<num; i++)
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    } 
}

int main()
{
    int n,m;
    cout<<"Enter the numbers to print the even numbers between them:";
    cin>>n;
    cin>>m;
    cout<<evennumbers(n , m);
    return 0;
}
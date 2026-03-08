#include <iostream>
using namespace std;
int stair(int n)
{
    if( n<0) return 0;
    if( n==0) return 1;
    return stair(n-1)+stair(n-2)+stair(n-3);    //for 3 options
    // return stair(n-1)+stair(n-2);    //for 2 options
}
int main()
{
    int n;
    cout<<"Enter the no of stair case:";
    cin>>n;
    cout<<stair(n);
}
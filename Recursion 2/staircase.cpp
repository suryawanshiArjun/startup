#include <iostream>
using namespace std;
int stair(int n)
{
    if( n<0) return 0;
    if( n==0) return 1;
<<<<<<< HEAD
    return stair(n-1)+stair(n-2)+stair(n-3);    //for 3 options
    // return stair(n-1)+stair(n-2);    //for 2 options
=======
    // return stair(n-1)+stair(n-2)+stair(n-3);    //for 3 options
    return stair(n-1)+stair(n-2);    //for 2 options
>>>>>>> 9d8e5db342dbf569f8b6d82ea5838dad2419f35b
}
int main()
{
    int n;
    cout<<"Enter the no of stair case:";
    cin>>n;
    cout<<stair(n);
}
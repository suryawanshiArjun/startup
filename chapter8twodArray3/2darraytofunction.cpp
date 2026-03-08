#include <iostream>
using namespace std;
void change2d(int arr[3][3])
{
    arr[0][1]=65;
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][1]<<"\n";
    change2d(arr);
    cout<<arr[0][1];
}
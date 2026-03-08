#include <iostream>
using namespace std;
void fun(int x, int *ptr1, int *ptr2)
{
    *ptr2=x%10;
    while(x>9)
    {
        x=x/10;
    }
    *ptr1=x;
}
int main()
{
    int x;
    cin>>x;
    int fd,ld;
    int *ptr1 = &fd;
    int *ptr2 = &ld;
    fun(x,ptr1,ptr2);
    cout<<fd<<" "<<ld;
}
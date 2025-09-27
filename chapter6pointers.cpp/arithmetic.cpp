#include <iostream>
using namespace std;

int main()
{
    int x=4;
    int *ptr=&x;
    cout<< *ptr<<"\n";
    *ptr = *ptr+1; //*ptr++ is invalid it gives garbage value (*ptr)++ is valid.
    cout<<*ptr;
}
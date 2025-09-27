#include <iostream>
using namespace std;
int main()
{
    int a,power=1;
    cout<<"Enter the number:";
    cin>>a;
    int b;
    cout<<"Enter the number:";
    cin>>b;
    for(int i=1; i<=b;i++)
    {
        power=power*a;
    }
    cout<<power;
}
#include <iostream>
using namespace std;
void pip(int n)
{
    if(n==0) return;
    cout<<"pre"<<n<<"\n";
    pip(n-1);
    cout<<"In"<<n<<"\n";
    pip(n-1);
    cout<<"post"<<n<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pip(n);
}
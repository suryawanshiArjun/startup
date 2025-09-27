#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number you want to print the table:";
    cin>>n;
    cout <<"The table of "<<n<<" is:";
    for(int i=1; i<=10;i++)
    {
        cout<<n<< " x "<<i<<" = "<<n*i<<"\n";
    }
}
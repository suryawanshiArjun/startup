#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the three digit number :";
    cin >> n;
    if(n >=100 && n<=999)
    {
        cout <<"This is a three digit number.";
    }
    else
    {
        cout <<"This is not a three digit number.";
    }
}
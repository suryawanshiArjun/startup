#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number :";
    cin >> n;
    if(n % 5 ==0 && n % 3 ==0)
    {
        cout <<"The number is divisible by both 5 and 3:";
    }
    else if(n % 5==0)
    {
        cout <<"The number is  divisible by 5 only";
    }
    else if(n % 3==0)
    {
        cout <<"The number is  divisible by 3 only";
    }
    else
    {
        cout << "The number is not divisible by 5 and nor 3.";
    }
}
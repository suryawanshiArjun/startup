#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check wether it is dividible by 5 or not:";
    cin >> n;
    if(n % 5 ==0)
    {
        cout << "Number is divisible by 5";
    }
    else
    {
        cout << "Number is not divisible by 5!, please enter the valid number.";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    if(a>b)
    {
        if(a>c)
        {
            cout << "a is greater tha b and c";
        }
        else{
            cout << "c is greater than a and b";
        }
    }
    else
    {
        if(b>c)
        {
            cout << "b is greater tha b and c";
        }
        else{
            cout << "c is greater than a and b";
        }
    }
}
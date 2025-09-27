#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the age of a:";
    cin >> a;
    cout << "Enter the age of b:";
    cin >> b;
    cout << "Enter the age of c:";
    cin >> c;
    if(a<b)
    {
        if(a<c)
        {
            cout << "a is smallest tha b and c";
        }
        else{
            cout << "c is smallest than a and b";
        }
    }
    else
    {
        if(b<c)
        {
            cout << "b is smallest tha b and c";
        }
        else{
            cout << "c is smallest than a and b";
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the side a of triangle:";
    cin >> a;
    cout << "Enter the side b of triangle:";
    cin >> b;
    cout << "Enter the side c of triangle:";
    cin >> c;
    if( (a+b)>c && (a+c) > b && (b+c) >a)
    {
        cout <<"This can be the sides of triangle:";
    }
    else
    {
        cout <<"This cannot be the sides of triangle:";  
    }
}
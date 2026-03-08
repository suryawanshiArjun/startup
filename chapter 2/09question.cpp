#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Enter the 1st number:";
    cin >> a;
    cout <<"Enter the 2nd number:";
    cin >> b;
    cout <<"Enter the 3rd number:";
    cin >> c;
    if(a>b && a>c )
    {
        cout <<"1st is the greatest number : " << a;
    }
    else if(b>a && b>c )
    {
        cout <<"2nd is the greatest number : " << b;
    }
    else
    {
        cout <<"3rd is the greatest number : " << c;
    }
}
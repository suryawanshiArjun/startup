#include <iostream>
using namespace std;
int main()
{
    int A,P;
    int l,b;
    cout << "Enter the length of the rectangle:";
    cin >> l;
    cout << "Enter the breadth of the rectangle:";
    cin >> b;
    A=l*b;
    P=2*(l+b);
    cout <<"Area of rectangle :" << A <<"\n" <<"The perimeter of rectangle is:"<< P <<"\n";
    if(A > P)
    {
        cout << "The area of rectangle is greater than the perimeter.";
    }
    else
    {
        cout << "The area of rectangle is less than the perimeter" ;
    }
}
// calculating the simple interest
#include <iostream>
using namespace std;
int main()
{
    float p,r,t ;
    float SI;
    cout <<"Enter the principle amount:";
    cin >> p;
    cout <<"Enter the rate per 100 rupees:";
    cin>>r;
    cout <<"Enter the time:";
    cin>>t;
    SI=(p*r*t)/100.0;
    cout <<"The simple interest is :";
    int Final= SI + p;
    cout <<SI <<"\n";
    cout <<"The total amount is :";
    cout <<Final;
}
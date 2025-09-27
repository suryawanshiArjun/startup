#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter marks :";
    cin >> n;
    if(n>=81 && n<=100)
    {
        cout <<"Very good";
    }
    else if(n >=61 && n<81)
    {
        cout <<"good";
    }
    else if(n>=45 && n<61)
    {
        cout <<"pass";
    }
    else {
        cout <<"Fail";
    }
}
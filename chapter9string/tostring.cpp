// it converts integer to string
#include <iostream>
using namespace std;
int main()
{
    int x=1234;
    string s= to_string(x);
    cout<<s<<"\n";
    int y=s.length();
    cout<<y;
}
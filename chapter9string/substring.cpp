#include <iostream>
using namespace std;
int main()
{
    // string s = "abcdef";
    // cout<<s.substr(0);// it gives output from the given index.
    // s.substr(index,length)
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int n=str.length();
    cout<<str.substr(n/2);

}
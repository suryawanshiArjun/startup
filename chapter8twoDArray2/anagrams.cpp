#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string v;
    cout<<"Enter the string s:";
    getline(cin,s);
    cout<<"Enter the string v:";
    getline(cin,v);
    int n=s.length();
    int m=v.length();
    sort(s.begin(), s.end());
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        
    }
}
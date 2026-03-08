#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of string:";
    cin>>n;
    char str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    int count =0;
    int i=0; 
    while(str[i]!='\0')
    {
        if(i%2==0)
        {
            str[i]='a';
        }
        else str[i];
        i++;
    }
    cout<<str<<" ";
}
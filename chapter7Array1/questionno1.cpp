#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    int marks[n+1];
    // int roll[12];
    cout<<"Enter the marks of the students:";
    for(int i=1; i<=n;i++)
    {
        cin>>marks[i];
    }
    for(int i=1; i<=n;i++)
    {
        if(marks[i]<35)
        cout<<i<<" ";
    }
    
}
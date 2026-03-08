//# find the last occurance of x in array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0; i <8; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"Enter the number to search:";
    cin>>x;
    int idx=-1;
    int flag=1;
    for(int i=0; i<v.size(); i++)
    {
        if(x==v[i])
        {
            idx=i;
            flag=0;
        }
    }
    cout<<idx;
    if(flag !=0)
    {
        cout<<"Element Not found ";
    }
}
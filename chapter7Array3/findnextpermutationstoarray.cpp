#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v(4);
    v[0]=1;
    v[1]=2;
    v[2]=4;
    v[3]=3;
    int idx=-1;
    for(int i=0; i<3; i++)
    {
        if(v[i]<v[i+1])
        {
            idx=i;
        }
    }
    if(idx==-1)
    {
        reverse(v.begin()+idx+1, v.end());
    }
    int j=-1;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]>v[idx])
        {
            j=i;
            break;
        }
    }
    int temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;

    for(int i=0; i<=3; i++)
    {
        cout<<v[i]<<" ";
    }
}
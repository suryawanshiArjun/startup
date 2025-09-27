#include <iostream>
#include <vector>
using namespace std;
void sort(vector <int> &v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(v[i]==0 )
        {
            i++;
        }
        else if(v[j]==1)
        {
            j--;
        }
        else //(v[i]==1 && v[j]==0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int n=8;
    vector <int> v(n);
    cout<<"Enter the elements in array:";
    for(int i=0 ;i <n; i++)
    {
        cin>>v[i];
    }
    sort(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
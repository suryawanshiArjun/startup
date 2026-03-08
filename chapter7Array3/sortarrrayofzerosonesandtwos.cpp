#include <iostream>
#include <vector>
using namespace std;
void mysort(vector <int> &v )
{
    int n=v.size();
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        if(v[mid]==2)
        {
            swap(v[mid], v[high]);
            high--;
        }
        else if(v[mid]==0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    int n=8;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    mysort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

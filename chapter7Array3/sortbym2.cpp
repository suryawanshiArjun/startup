#include <iostream>
#include <vector>
using namespace std;
void sort(vector <int> &v)
{
    int n= v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(i<j && v[i]==0) i++;
            while(i<j && v[j]==1) j--;
        if(i<j)
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
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
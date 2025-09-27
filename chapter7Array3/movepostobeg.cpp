#include <iostream>
#include <vector>
using namespace std;
void sort(vector <int> &v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[i]<v[j])
                {
                    int temp =v[i];
                    v[i]=v[j];
                    v[j]=temp;
                }    
            }
        }
}
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    sort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
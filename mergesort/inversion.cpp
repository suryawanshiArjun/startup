#include <iostream>
#include <vector>
using namespace std;
int c=0;
int inversion(vector<int> &a, vector<int> &b){
    int count =0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            count+=(a.size()-i);
            j++;
        }
        else 
        {
            i++;
        }
    }
    return count;
}
void merge(vector<int> &v, vector<int> &a, vector<int> &b)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
        {
            v[k++]=a[i++];
        }
        else
        {
            v[k++]=b[j++];
        }
    }
    while(i<a.size())
    {
        v[k++]=a[i++];
    }
        
    while(j<b.size())
    {
        v[k++]=b[j++];
    }
    
}

void mergesort(vector<int> &v)
{
    int n=v.size();
    if(n==1) return;
    int a1 = n/2;
    int b1 = n-n/2;
    vector<int> a(a1);
    vector<int> b(b1);
    for(int i=0; i<a1; i++)
    {
        a[i]=v[i];
    }
    for(int i=0; i<b1; i++)
    {
        b[i]=v[i+a1];
    }
    mergesort(a);
    mergesort(b);
    c+=inversion(a,b);
    merge(v,a,b);
}

int main()
{
    int n,x;
    cout<<"Enter the size of vector v:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of vector v:";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        // v.push_back(x);
    }
    cout<<"\n";
    mergesort(v);
    cout<<"The merged vector";
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<c;
    return 0;
}
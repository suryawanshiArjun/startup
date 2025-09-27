#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1;
    cout<<"Enter the first row elements:";
    for(int i=0; i<5; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    cout<<"Enter the second row elements:";
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    vector<int>v3;
    cout<<"Enter the third row elements:";
    for(int i=0; i<5; i++)
    {
        int b;
        cin>>b;
        v3.push_back(b);
    }
    vector<int>v4;
    cout<<"Enter the fourth row elements:";
    for(int i=0; i<5; i++)
    {
        int c;
        cin>>c;
        v4.push_back(c);
    }
    vector<int>v5;
    cout<<"Enter the fifth row elements:";
    for(int i=0; i<5; i++)
    {
        int d;
        cin>>d;
        v5.push_back(d);
    }
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    
    for(int i=0; i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    int found=1;
    int count=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5;j++)
        {
            if(target==v[i][j]) 
            {
                cout<<"Target found";
                found = 0;
                break;
            }
            if(target<v[i][j]) 
            {
                break;
            }
            count++;
        }
        if(found==0)
        { 
            cout<<" at "<<count<<" iteration";
            break;
        }
    }
    if(found!=0)
    {
        cout<<"Not found:";
    }
    
}
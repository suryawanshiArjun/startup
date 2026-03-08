#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector< vector<int> > v;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector <int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    vector <int> v3;
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    // vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    for(int i=0; i<12;i++)
    {
        for(int j=0; j<=3;j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
}
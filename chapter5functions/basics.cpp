#include <iostream>
using namespace std;
void startriangle(int x){             // int x is an argument.
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    startriangle(4);
}
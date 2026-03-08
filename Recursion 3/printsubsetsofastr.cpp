#include <iostream>
#include <string>
using namespace std;
void printsubsets(string ans, string original, int idx)
{
    if(idx==original.length())
    {
        cout<<ans<<"\n";
        return;
    }     
    char ch= original[idx];
    printsubsets(ans,original,idx+1);
    printsubsets(ans + ch,original,idx+1);
}
int main()
{
    string str="arjun";
    printsubsets("",str,0);
}
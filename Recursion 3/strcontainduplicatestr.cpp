#include <iostream>
#include <vector>
using namespace std;

void storesubset(string ans, string original, vector<string>& v, bool flag)
{
    if(original.length() == 0)  // base case
    {
        v.push_back(ans);
        return;
    }

    char ch = original[0];

    if(original.length() == 1) // safe: length == 1
    {
        if(flag == true)
            storesubset(ans + ch, original.substr(1), v, true);
        storesubset(ans, original.substr(1), v, true);
        return;
    }

    char ch2 = original[1];     // safe: length >= 2 now

    if(ch == ch2)
    {
        if(flag == true)
            storesubset(ans + ch, original.substr(1), v, true);
        storesubset(ans, original.substr(1), v, false);
    }
    else
    {
        if(flag == true)
            storesubset(ans + ch, original.substr(1), v, true);
        storesubset(ans, original.substr(1), v, true);
    }
}

int main()
{
    string str = "aaabbc";
    vector<string> v;
    storesubset("", str, v, true);

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

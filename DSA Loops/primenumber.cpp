#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check prime or not:";
    cin >>n;
    int flag =true;
    for(int i=2; i<n;i++)
    {
        if(n % i ==0)
        {
            flag=false;
            break;
        }
    }
    if(n<=1)
    cout<<n<<" is neither  prime nor composite.";
    else if(flag==0) cout<< n<<" composite number.";
    else cout<<n <<" prime number.";
}
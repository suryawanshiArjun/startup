// #include <iostream>
// using namespace std;
// int main()
// {
//     string str ="rahul is good boy.";
//     int count =0;
//     int i=0; 
//     while(str[i]!='\0')
//     {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
//         {
//             count++;
//         }
//         i++;
//     }
//     cout<<count;
// }

// or
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of string:";
    cin>>n;
    char str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    int count =0;
    int i=0; 
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout<<count;
}

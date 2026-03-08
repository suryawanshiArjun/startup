// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the no of elements:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements:";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The array elements are :";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // insertion sort
//     for(int i=1; i<n; i++)
//     {
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1])
//         {
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
//     cout<<"The sorted array elements:";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
class shop
{
    int id;
    string name;
    static int count;

public:
    static void showcount();
    void setdata();
    void getdata(void);
};

int shop ::count = 0;
void shop ::setdata()
{
    cout << "Enter item id:";
    cin >> id;
    cout << "Enter name of item:";
    cin >> name;
    count++;
}
void shop ::getdata()
{
    cout << "The item id is:" << id << "\n";
    cout << "The item name is:" << name << "\n";
}
void shop ::showcount()
{
    cout << "The count is:" << count << "\n";
}
int main()
{
    shop item1[5];
    for (int i = 0; i < 5; i++)
    {
        item1[i].setdata();
    }
    for (int i = 0; i < 5; i++)
    {
        item1[i].getdata();
    }
    shop::showcount();
    return 0;
}
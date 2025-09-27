// #include <iostream>
// using namespace std;
// int main()
// {
    // int n;
    // cout<<"Enter the size of array:";
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n-1; i++)
    // {
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         if(arr[j]==0)
    //         {
    //             swap(arr[j] ,arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    #include<iostream>
    using namespace std;
    int main(){
    int arr[] = {1,2,3,4,5,6,7};
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}
// }
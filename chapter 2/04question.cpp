#include <iostream>
using namespace std;
int main()
{
    int cost, sell;
    cout <<"Enter the value of cost price of an item :";
    cin >> cost;
    cout <<"Enter the value of sell price of an item :";
    cin >> sell;
    if(sell > cost)
    {
        cout << "Seller make the profit of RS:" << sell-cost;
    }
    else if (sell < cost)
    {
        cout << "Seller is in loss of RS:"<<cost-sell ;
    }
    else
    {
        cout<<"There is no profit and loss for the seller.";
    }
}
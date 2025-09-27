#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter the x coordinate :";
    cin >> x;
    cout << "Enter the y coordinate :";
    cin >> y;
    if(x>0 && y>0)
    {
        cout <<"coordinates lies in first quaderant.";
    }
    else if(x<0 && y>0)
    {
        cout <<"coordinates lies in second quaderant.";
    }
    else if(x<0 && y<0)
    {
        cout <<"coordinates lies in third quaderant.";
    }
    else if(y<0 && x>0)
    {
        cout <<"coordinates lies in fourth quaderant.";
    }
    else if(y==0 && x>0)
    {
        cout <<"coordinates lies on x-axis.";
    }
    else if(x==0 && y>0)
    {
        cout <<"coordinates lies on y-axis.";
    }
    else
    {
        cout <<"coordinates lies on origin.";
    }

}
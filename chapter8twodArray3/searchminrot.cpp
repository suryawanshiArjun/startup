#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    cout << "Enter the first row elements:";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    vector<int> v2;
    cout << "Enter the second row elements:";
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }

    vector<int> v3;
    cout << "Enter the third row elements:";
    for (int i = 0; i < 5; i++)
    {
        int b;
        cin >> b;
        v3.push_back(b);
    }

    vector<int> v4;
    cout << "Enter the fourth row elements:";
    for (int i = 0; i < 5; i++)
    {
        int c;
        cin >> c;
        v4.push_back(c);
    }

    vector<int> v5;
    cout << "Enter the fifth row elements:";
    for (int i = 0; i < 5; i++)
    {
        int d;
        cin >> d;
        v5.push_back(d);
    }

    // Put all rows into 2D vector
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    cout << "\nMatrix is:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "\nEnter the target element: ";
    cin >> target;

    int rows = v.size();
    int cols = v[0].size();

    int i = 0, j = cols - 1; // start from top-right corner
    bool found = false;

    while (i < rows && j >= 0)
    {
        if (v[i][j] == target)
        {
            cout << "Target " << target << " found at position (" << i << "," << j << ")" << endl;
            found = true;
            break; 
        }
        else if (v[i][j] > target)
            j--; 
        else
            i++;
    }

    if (!found)
        cout << "Target " << target << " not found!" << endl;

    return 0;
}

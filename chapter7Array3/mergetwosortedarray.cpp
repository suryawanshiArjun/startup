#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &v1, vector<int> &v2) {
    int i = v1.size() - 1; 
    int j = v2.size() - 1; 
    vector<int> result;

    while (i >= 0 && j >= 0) {
        if (v1[i] >= v2[j]) {
            result.push_back(v1[i]);
            i--;
        } else {
            result.push_back(v2[j]);
            j--;
        }
    }

    while (i >= 0) {
        result.push_back(v1[i]);
        i--;
    }
    while (j >= 0) {
        result.push_back(v2[j]);
        j--;
    }

    return result; // result is already in descending order
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> v1(m), v2(n);

    for (int i = 0; i < m; i++) cin >> v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i];

    vector<int> merged = merge(v1, v2);

    for (int x : merged) cout << x << " ";
}

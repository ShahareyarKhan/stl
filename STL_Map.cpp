#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    mp[4] = "four";

    cout << "Map elements:\n";
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    cout << "\n\nQ1. Count frequency of each element in vector\n";
    vector<int> v = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    map<int, int> m;  
    for (int i = 0; i < v.size(); i++) {
        m[v[i]]++;
    }
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
    }

    cout << "\n\nQ2. Unique elements in vector\n";
    for (auto x : m) {
        if (x.second == 1) { 
            cout << x.first << " ";
        }
    }
    cout << endl;

    return 0;
}

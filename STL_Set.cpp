#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(3);

    cout << "Elements in set (sorted by default):\n";
    for (auto x : s) {
        cout << x << " ";  // Iterating through the set (sorted order)
    }
    cout << endl;

    // Accessing the first element using an iterator
    // cout<<s[0]; error because set stores elements in a sorted order but does not provide random access through indexing like an array or vector. 
    cout << "First element: " << *s.begin() << endl; 

    return 0;
}

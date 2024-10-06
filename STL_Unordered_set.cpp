#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st;
    st.insert(4);
    st.insert(2);
    st.insert(5);
    st.insert(1);
    st.insert(3);

    cout << "Elements in unordered_set (no particular order):\n";
    for (auto x : st) {
        cout << x << " ";  
    }
    cout << endl;

    auto it = st.begin();  // Iterator to the first element
    cout << "An element from the unordered_set: " << *it << endl; // derefrencing

    return 0;
}

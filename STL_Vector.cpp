#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;
int main() {

    // 1. Initializing Vectors
    vector<int> v1;        // Declares an empty vector of integers
    vector<int> v2(5);     // Declares a vector of integers with 5 elements, default value 0
    vector<int> v3(5, 1);  // Declares a vector of 5 integers, each value 1
    
    for(int i = 0; i < 8; i++) {
        v1.push_back(i);   // Adds values 0 to 7 to the end of vector v1, increasing its size dynamically
        // v2[i] = i;         // Assigns values 0 to 7 to vector v2. May result in out-of-bounds access after index 4
        // v3[i] = i;         // Assigns values 0 to 7 to vector v3. May result in out-of-bounds access after index 4
    }

    // 2. Iterating through Vectors
    cout << "Basic Loop Iteration: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  
    }
    cout << endl;

    cout << "Iterator Iteration: ";
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";   
    }
    cout << endl;

    cout << "Auto Keyword Iteration: ";
    for(auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";   
    }
    cout << endl;

    cout << "Range-based Loop Iteration: ";
    for(int &x : v1) {
        cout << x << " ";    
    }
    cout << endl;

    // 3. Sorting Vectors
    sort(v1.begin(), v1.end());
    // sort(v1.begin(), v1.end(), greater<int>()); // descending order sorting
    cout << "Sorted v1: ";
    for(int &x : v1) {
        cout << x << " "; 
    }
    cout << endl;

    // 4. Reversing Vectors
    reverse(v1.begin(), v1.end());
    cout << "Reversed v1: ";
    for(int &x : v1) {
        cout << x << " "; 
    }
    cout << endl;

    // 5. Finding Elements in Vectors
    if(find(v1.begin(), v1.end(), 4) != v1.end()) {
        cout << "Found 4 in v1 (find function)" << endl;
    } else {
        cout << "Did not find 4 in v1" << endl;
    }

    // 6. Inserting Elements
    v1.insert(v1.begin() + 2, 99);  
    cout << "After inserting 99 at index 2: ";
    for(auto x : v1) 
        cout << x << " ";
    cout << endl;

    // 7. Erasing Elements
    v1.erase(v1.begin() + 2);
    cout << "After erasing element at index 2: ";
    for(auto x : v1) 
        cout << x << " ";
    cout << endl;

    // 8. Clearing the Vector
    v1.clear();
    cout << "Size after clearing v1: " << v1.size() << endl;

    // 9. Checking if Vector is Empty
    if(v1.empty()) {
        cout << "v1 is empty" << endl;
    }

    // 10. Resizing the Vector
    v1.resize(5);
    cout << "Size after resizing v1 to 5: " << v1.size() << endl;

    // 11. Pushing and Popping Elements
    v1.push_back(100); // Add at end
    cout << "After push_back(100), last element: " << v1.back() << endl; // Access the last element
    v1.pop_back();                   // Removes the last element
    cout << "After pop_back(), size of v1: " << v1.size() << endl;

    // 12. Accessing First and Last Elements
    cout << "Front element: " << v1.front() << endl;  // Access the first element
    cout << "Back element: " << v1.back() << endl;    // Access the last element

    return 0;
}


/*
Summary -->
    sort : 
        sort(v1.begin(), v1.end()); // Ascending order sorting
        sort(v1.begin(), v1.end(), greater<int>()); // descending order sorting
    reverse :
        reverse(v1.begin(), v1.end());
    find :
        if(find(v1.begin(), v1.end(), x) != v1.end()) {
            
        }
    insert :
        v1.insert(v1.begin() + 2, 99);
    erase :
        v1.erase(v1.begin() + 2);
    clear :
        v1.clear();
    resize :
        v1.resize(5);
    push_back :
        v1.push_back(100);
    pop_back :
        v1.pop_back();
    front :
        v1.front();
    back :
        v1.back();
*/

/*
    https://www.geeksforgeeks.org/explore?page=2&category=Arrays&difficulty=Easy&sortBy=submissions&utm_source=gfg&utm_medium=gfg_header&utm_campaign=gfgpractice_header
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, string> mp;
    mp[1]="one";   
    mp[2]="two";   
    mp[3]="three";   
    mp[4]="four";   

    // easy way
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"\n\nQ1. count frequency of each element in vector\n";
    vector<int> v={1,1,1,2,2,3,3,3,3,3,4,4,4,4,4,4,4,4,5,6,7};
    unordered_map<int, int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"\n\nQ2. Unique element in vector\n";
    for(auto x:m){
        if(x.second==1){ // x.second means frequency
            cout<<x.first<<" ";
        }
    }
    cout<<endl;

    return 0;
}
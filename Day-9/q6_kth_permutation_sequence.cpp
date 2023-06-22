#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

string kthPermutation(int n, int k) {
    // Write your code here.
    int total=1;
    vector<int> vec(n+1,1);
    set<int> set1;
    set1.insert(1);
    string ans="";
    for(int i=2; i<=n; i++) {
        vec[i]=vec[i-1]*i;
        set1.insert(i);
    }
    n--;
    auto it = set1.begin();
    while(k>1) {
        
        if(k>vec[n]) {
            it++;
            k-=vec[n];
        }
        else {
            ans+=('0'+*(it));
            set1.erase(it);
            it=set1.begin();
            n--;
        }
    }
    ans+=('0'+*(it));
    set1.erase(it);
    for(auto it2 :set1) {
        ans+=('0'+it2);
    }
    return ans;
}

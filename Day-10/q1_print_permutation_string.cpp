#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad
void fn(string& s, int ind,vector<string>& ans) {
    if(ind == s.size()) {
        ans.push_back(s);
        return;
    }
    for(int i=ind; i<s.size(); i++) {
        char temp = s[ind];
        s[ind] = s[i];
        s[i]=temp;
        fn(s,ind+1,ans);
        s[i]=s[ind];
        s[ind]=temp;
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    fn(s,0,ans);
    return ans;
}
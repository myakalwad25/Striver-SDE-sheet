#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

bool is_palindrome(string str) {
    string str2=str;
    reverse(str2.begin(),str2.end());
    return str == str2;
}
void fn(string& s, int ind, vector<string> vec, vector<vector<string>>& ans) {
    if(ind ==s.size()) {
        ans.push_back(vec);
    }
    string str="";
    for(int i=ind; i<s.size(); i++) {
        str+=s[i];
        if(is_palindrome(str)) {
            vec.push_back(str);
            fn(s,i+1,vec,ans);
            vec.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string> vec;
    vector<vector<string>> ans;

    fn(s,0,vec,ans);
    return ans;
}
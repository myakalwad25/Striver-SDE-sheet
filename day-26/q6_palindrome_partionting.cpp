#include <bits/stdc++.h> 
using namespace std;

//code by vijay myakalwad

bool is_palindrome(string str) {
    string s = str;
    reverse(s.begin(),s.end());
    return s==str;
}
int fn(string str, int st, int ed,vector<vector<int>>& dp) {
    if(st==ed) return 0;

    if(dp[st][ed]!=-1) return dp[st][ed];
    int ans = INT_MAX;
    string s = "";

    for(int i=st; i<ed; i++) {
        
        s+=str[i];
        if(is_palindrome(s)) {
            ans = min(ans,1+fn(str,i+1,ed,dp));
        }
    }
    return dp[st][ed]=ans;
}
int palindromePartitioning(string str) {
    // Write your code here
    int n = str.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return fn(str,0,n,dp)-1;
}

#include <bits/stdc++.h> 
using namespace std;

//code by vijay myakalwad;

bool fn(int st, int len, unordered_map<string,int>& mp, string target,vector<vector<int>>& dp) {
    if(len==0) return false;
    string str=target.substr(st,len);
    if(mp.find(str)!=mp.end()) return true;
    
    if(dp[st][len]!=-1) return dp[st][len];
    bool ans = false;
    for(int i=1; i<len; i++) {
        ans = ans||(fn(st,i,mp,target,dp) && fn(st+i,len-i,mp,target,dp));
    }
    return dp[st][len]=ans;
}
bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
    int len = target.size();
    unordered_map<string,int> mp;
    for(auto str: arr) {
        mp[str]++;
    }
    vector<vector<int>>dp(len+1,vector<int>(len+1,-1));
    return fn(0,len,mp,target,dp);
}
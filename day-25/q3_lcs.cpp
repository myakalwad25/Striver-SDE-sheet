#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int fn(string& s, string& t, int ind1, int ind2,vector<vector<int>>& dp) {
	if(ind1==s.size() || ind2==t.size()) {
		return 0;
	}
    
	if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
	if(s[ind1]==t[ind2]) {
		return dp[ind1][ind2]=1+ fn(s,t,ind1+1,ind2+1,dp);
	}
	else {
		int tk = fn(s,t,ind1+1,ind2,dp);
		int nt = fn(s,t,ind1,ind2+1,dp);
		return dp[ind1][ind2]=max(tk,nt);
	}

}
int lcs(string s, string t)
{
	//Write your code here
	int len1= s.size();
	int len2 = t.size();
	vector<vector<int>> dp(len1,vector<int>(len2,-1));
	return fn(s,t,0,0,dp);
}
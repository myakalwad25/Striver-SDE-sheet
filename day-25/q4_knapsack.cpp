#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int fn(vector<int> &values, vector<int> &weights, int n, int w,int ind, int wt,vector<vector<int>>& dp) {
	if(ind==n || wt==0 ) {
		return 0;
	}
    
	if(dp[ind][wt]!=-1) return dp[ind][wt];
	int cost = fn(values,weights,n,w,ind+1,wt,dp);
	if(wt>=weights[ind]) {
		cost = max(cost,values[ind]+fn(values,weights,n,w,ind+1,wt-weights[ind],dp));
	}

	return dp[ind][wt]=cost;
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
	return fn(values,weights,n,w,0,w,dp);
}
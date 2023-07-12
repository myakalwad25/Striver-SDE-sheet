#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int fn(int st, int ed,vector<int>& price,vector<int>& dp ) {
	if(st>=ed) return 0;
	if(ed-st==1) return price[0];
	if(dp[ed-st-1]!=-1) return dp[ed-st-1];
	int ans = price[ed-st-1];
	for(int i=st+1; i<ed; i++) {
		ans=max(ans,fn(st,i,price,dp)+fn(i,ed,price,dp));
	}
	return dp[ed-st-1]= ans;
}
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	//int ans =price[n-1];

	vector<int> dp(n+1,-1);
	return fn(0,n,price,dp);
}

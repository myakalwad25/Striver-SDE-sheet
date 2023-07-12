#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

long fn(int* denominations, int n, int value, int ind,vector<vector<long long>>& dp) {
    if(ind==n) {
        if(value==0)
         return 1;
        return 0;
    }
    
    if(dp[ind][value]!=-1) return dp[ind][value];

   
    

    long not_take = fn(denominations,n,value,ind+1,dp);
    if(denominations[ind]<=value) not_take+=fn(denominations,n,value-denominations[ind],ind,dp);
   
    return dp[ind][value]=not_take;
}


long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long long>> dp(n+1,vector<long long>(value+1,-1));
    return fn(denominations,n,value,0,dp);
}
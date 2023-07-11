#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int longestIncreasingSubsequence(int arr[], int n)
{   
    // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    vector<int> vec;
    int len=0;
    for(int i=0; i<n; i++) {
        if(len==0 || vec[len-1]<arr[i]) {
            vec.push_back(arr[i]);
            len++;
        }
        else {
            int it =lower_bound(vec.begin(),vec.end(),arr[i])-vec.begin();
            vec[it]=arr[i];
        }
    }
    return len;
    
}

#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

void fn(vector<int>arr, int ind,int n, int k, vector<int> vec, vector<vector<int>>& ans, int sum) {
    if(ind==n) { 
        if(sum==k  && vec.size()!=0) {
            ans.push_back(vec);
            
        }
        return ;
    }
    // not_take
    fn(arr,ind+1,n,k,vec,ans,sum);
    //take
    vec.push_back(arr[ind]);
    fn(arr,ind+1,n,k,vec,ans,sum+arr[ind]);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    //sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> vec;
    fn(arr,0,n,k,vec,ans,0);
    return ans;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void get_result(vector<int> candidates ,vector<int> vec, int target,int i,
    vector<vector<int>> &ans) {
        if(target==0) {
           ans.push_back(vec);
           return;
        }
       
        for(int j=i; j<candidates.size(); j++) {
            if(candidates[j]<= target) {
               vec.push_back(candidates[j]);
               get_result(candidates,vec,target-candidates[j],j+1,ans);
               vec.pop_back();      
               while(j<(candidates.size()-1) && candidates[j]==candidates[j+1]) {
                  j++;
               }      
           }
           else break;
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n = candidates.size();
        vector<vector<int>> ans;
        
        vector<int> vec;
        get_result(candidates,vec,target,0,ans);
        return ans;
    }
};
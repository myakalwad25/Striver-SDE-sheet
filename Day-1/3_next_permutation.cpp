#include <bits/stdc++.h> 
using namespace std;

// code by  vijay myakalwad

vector<int> nextPermutation(vector<int> &nums, int n)
{
   int len =n;
        vector<int> vec;
        vector<int> ans;
        int cunt=0;
        int maxi=nums[n-1];
        vec.push_back(nums[n-1]);
        int i;
        for( i=len-2; i>=0; i--) { 
            
            
            if(nums[i]<maxi) {
                auto it=upper_bound(vec.begin(),vec.end(),nums[i]);
                int temp=*it;
                *it=nums[i];
                nums[i]=temp;
                ans.insert(ans.begin(),vec.begin(),vec.end());
                ans.insert(ans.begin(),nums.begin(),nums.begin()+i+1);
                break;
            }
            else{
                vec.push_back(nums[i]);
                cunt++;
                maxi=nums[i];
            }

        }
        
        
        nums=ans;
        if(i<0) nums=vec;
    return nums;
}
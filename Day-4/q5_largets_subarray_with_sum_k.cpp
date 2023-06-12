#include <bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int LongestSubsetWithZeroSum(vector < int > arr) {
    map<int,int> mp;
    int n=arr.size();
    int target=0;
    int sum=0;
    int len=0;
    for(int i=0; i<n; i++) {
         sum+=arr[i];
         if(sum==target) len=i+1;
         else if(mp.find(sum-target)==mp.end()) {
            if(mp.find(sum)==mp.end())
             mp[sum]=i;
         }
         else{
           int pre_ind=mp[sum-target];
           int temp=i-pre_ind;
           len=max(len,temp);
         }

    }
    return len;

  // Write your code here

}
#include <bits/stdc++.h>
using namespace std;
// vijay myakalwad
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n= arr.size();
    map<int,int> mp;
    vector<int> ans;
    for(auto x: arr) {
        mp[x]++;
        if(mp[x]>n/3) {
            ans.push_back(x);
            mp[x]=-n;
        }
    }
    return ans;

}
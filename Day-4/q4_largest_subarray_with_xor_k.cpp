#include <bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int subarraysXor(vector<int> &arr, int x)
{
    map<int,int> mp;
    int st=0;
    mp[st]++;
    int ans=0;
    for(int i=0; i<arr.size(); i++) {
        st=st^arr[i];
        int rq=x^st;
        ans+=mp[rq];
        mp[st]++;
    }
    return ans;
}
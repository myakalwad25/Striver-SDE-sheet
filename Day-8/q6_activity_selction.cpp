#include<bits/stdc++.h>
using namespace std;


//code by vijay myakalwad

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> vec;
    int n= start.size();
    for(int i=0; i<n; i++) {
        vec.push_back({finish[i],start[i]});

    }
    sort(vec.begin(),vec.end());
    int ans=0;
    int last=-1;
    for(int i=0; i<n; i++) {
        if(vec[i].second>=last) {
            ans++;
            last=vec[i].first;
        }
    }
    return ans;
}
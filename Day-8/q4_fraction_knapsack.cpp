#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad 

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double,int>> vec;
    for(int i=0; i<n; i++) {
        double it = (double)items[i].second/items[i].first;
       // cout<<it<<"ji"<<endl;
       vec.push_back({it,i});

    }
    double ans=0;
    sort(vec.begin(),vec.end());
    for(int i=n-1; i>=0; i--) {
       // cout<<items[vec[i].second].first<<" "<<items[vec[i].second].second<<endl;
        if(w>=items[vec[i].second].first) {
            w-=items[vec[i].second].first;
            ans+=items[vec[i].second].second;
        }
        else {
            ans+=((double(items[vec[i].second].second)/items[vec[i].second].first)*w);
            break;
        }
    }
    return ans;
}
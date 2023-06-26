#include<bits/stdc++.h>
using namespace std;

//code by vijay myakalwad

int largestRectangle(vector < int > & heights) {
  // Write your code here.
      stack<pair<int,int>> stk;
      int maxi=0;
      int n = heights.size();
      for(int i=0; i<n; i++) {
        if(stk.empty() || heights[i]>=stk.top().second) {
          stk.push({1,heights[i]});
        }
        else {
          int row=0;
          int hg=0;
          while(!stk.empty() && stk.top().second>=heights[i]) {
              row+=stk.top().first;
              hg=stk.top().second;
              stk.pop();
              maxi=max(maxi,row*hg);
          }
          row++;  
          maxi=max(maxi,row*heights[i]);
          stk.push({row,heights[i]});
        }
      }
      int row=0;
      int hg=0;
      while(!stk.empty()) {
        row+=stk.top().first;
        hg=stk.top().second;
        stk.pop();
        maxi=max(maxi,row*hg);
      }

      return maxi;
}
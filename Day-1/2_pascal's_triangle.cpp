#include <bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> prev;
    for(int i=0; i<N; i++) {
        vector<int> temp(i+1,1);
        
        for(int j=1; j<i; j++) {
            temp[j]=prev[j]+prev[j-1];
        }
        prev=temp;
        ans.push_back(temp);
    }
    return ans;
}
#include <bits/stdc++.h> 
using namespace std;

//code by vijay myakalwad

bool fn(vector<vector<int>>& mat,int ind,int m,int r,vector<int>& color) {

    if(ind==r) return true;
    map<int,int> mp;
    for(int i=1; i<=m; i++) {
        mp.insert({i,i});
    }
    for(int i=0; i<r; i++) {
        if(mat[ind][i]==1 ) {
            if(mp.find(color[i])!=mp.end()) {
                mp.erase(color[i]);
            }
        }
    }
    if(mp.size()==0) return false;
    for(auto it :mp) {
        color[ind]=it.second;
         if(fn(mat,ind+1,m,r,color)) return true;
        color[ind]=0;
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int r = mat.size() ;
    vector<int> color(r);
    if(fn(mat,0,m,r,color)) return "YES";
    return "NO";
}
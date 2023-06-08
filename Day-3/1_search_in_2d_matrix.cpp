#include<bits/stdc++.h>
using namespace std;
// code by vijay myakalwad


bool searchMatrix(vector<vector<int>>& mat, int target) {
       int n = mat.size();
       int m = mat[0].size();
       if(target<mat[0][0] || target>mat[n-1][m-1]) return false;
       for(int row=0; row<n; row++) {
            if (target >= mat[row][0] && target <= mat[row][m - 1]) {
                for (int col = 0; col < m; col++) {
                    if(mat[row][col]==target) return true;
                }
                return false;
            }
       }
       return false;
}
#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int> prev(n+1,1);
        vector<int> curr(n+1,0);
    
        for(int row=1; row<m; row++) {
            for(int col=1; col<=n; col++) {
                curr[col]=prev[col]+curr[col-1];
            }
            prev=curr;
        }
        return prev[n];
}
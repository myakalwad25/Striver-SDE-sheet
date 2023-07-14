#include <bits/stdc++.h> 
int maximumXor(vector<int> A)
{
    // Write your code here.  
    int maxi=0;
    int n = A.size();
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            maxi= max(maxi,A[i]^A[j]);
        }
    } 
    return maxi;
}
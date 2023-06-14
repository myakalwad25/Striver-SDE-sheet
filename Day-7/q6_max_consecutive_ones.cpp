#include<bits/stdc++.h>
using namespace std;

int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.

    queue<int> que;
    if(k==0) {
        que.push(0);
    }
    else{
    while(k--) {
        que.push(-1);
    }}
    int maxi=0;
    int len=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            int last=i-que.front();
            que.push(i);
            while(i<n && arr[i+1]==1) {
                last++;
                i++;
            }
            que.pop();
            maxi= max(maxi,last);
           
        }
        
        
    }
    return maxi;
}

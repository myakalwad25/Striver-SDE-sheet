#include <bits/stdc++.h>
using namespace std;

// code by vijay myakalwad
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int maxi=0;
    
    unordered_set<int> set1;
    for(int i=0; i<n; i++) {
        set1.insert(arr[i]);
    }
   

    for(int i=0; i<n; i++) {
        if(set1.find(arr[i]-1)!=set1.end()) continue;
        else {
            int count=0;
            int temp=arr[i];
            while(set1.find(temp)!=set1.end()) {
                count++;
                temp++;
            }
            maxi=max(maxi,count);
        }
    }
    return maxi;
}
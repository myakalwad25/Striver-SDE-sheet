#include <bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0; i<n-3; i++) {      
        for(int j=i+1; j<n-2; j++)  {
            int st=j+1;
            int ed=n-1;
            while(st<ed) {
                if(arr[i]+arr[j]+arr[st]+arr[ed]>target) {
                    ed--;
                }
                else if(arr[i]+arr[j]+arr[st]+arr[ed]<target) {
                    st++;
                }
                else {
                    return "Yes";
                }
            }
            while(j<n-3 && arr[j]==arr[j+1]) {
                j++;
            }
        }
        while(arr[i]==arr[i+1]) {
            i++;
        }
    }
    return "No";
}

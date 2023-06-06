#include <bits/stdc++.h> 
using namespace std;

 // code by vijay myakalwad

long long maxSubarraySum(int arr[], int n)
{
   
    long long ans=0;

    vector<long long> vec(n);
    long long prev=0;
    for(int i=0; i<n; i++) {
        if(prev+arr[i]>0) {
           vec[i]=prev+arr[i];
           
        }
        else vec[i]=0;
        prev=vec[i];

        //cout<<arr[i]<<" ";
        if(vec[i]>ans) {
            ans=vec[i];
        }
    }
   
    return ans;
}
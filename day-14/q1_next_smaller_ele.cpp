#include<bits/stdc++.h>
using namespace std;

// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     stack<int> stk;
//     stk.push(arr[n-1]);
//     vector<int> vec(n,-1);
//     for(int i=n-2; i>=0; i--) {
//         while(!stk.empty() && arr[i]<=stk.top()) {
//             stk.pop();
//         }
//         if(!stk.empty()) {
//             vec[i]=stk.top();
//         }
//         stk.push(arr[i]);
//     }
//     return vec;
// }

int main() {
    map<int,int> mp;
    mp.insert({2,1});
    mp.insert({1,9});
    mp[3]++;
    for(auto it : mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
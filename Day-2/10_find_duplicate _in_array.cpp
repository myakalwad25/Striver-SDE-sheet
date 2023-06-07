#include <bits/stdc++.h>
using namespace std;
//code by vijay myakalwad
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int> mp;
	for(int i=0; i<n; i++) {
		if(mp.count(arr[i])==0) {
			mp[arr[i]]=1;
		}
		else return arr[i];
	}
	return 0;
}

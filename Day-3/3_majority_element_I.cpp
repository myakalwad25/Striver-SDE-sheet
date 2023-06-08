#include <bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> mp;
	for(int i=0; i<n; i++) {
		mp[arr[i]]++;
		
		//cout<<mp[arr[i]]<<endl;
		if(mp[arr[i]]>(n/2)) return arr[i];
	}
	return -1;
}
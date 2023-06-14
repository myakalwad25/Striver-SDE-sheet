#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	// code by vijay myakalwad
    int count=0;
	for(int i=0; i<n; i++) {
		count++;
		while(i<n-1 && arr[i]==arr[i+1]) {
			i++;
		}
		
	}
	return count;
}
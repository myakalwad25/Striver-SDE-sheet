#include <bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	// code by vijay myakalwad;
	int ptr1=m-1;
	int ptr2=n-1;
	int ptr3=m+n-1;
	while(ptr3>=0)  {
		if( ptr2<0) break;
		if(ptr1<0) {arr1[0]=arr2[0];
		  while(ptr3>=0) {
			  arr1[ptr3]=arr2[ptr2];
			  ptr3--;
			  ptr2--;
		  }
		  break;
        }
		if(arr1[ptr1]>arr2[ptr2]) {
			arr1[ptr3]=arr1[ptr1];
			arr1[ptr1]=0;
			ptr1--;
		}
		else {
			arr1[ptr3]=arr2[ptr2];
			ptr2--;
		}
		//cout<<arr1[ptr3]<<endl;
		ptr3--;
	}
	return arr1;
	
}
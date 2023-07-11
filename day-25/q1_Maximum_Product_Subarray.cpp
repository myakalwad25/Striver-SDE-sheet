#include <bits/stdc++.h> 
using namespace std;

//code by vijay myakalwad

int fn(vector<int>& arr, int low , int high,int n_neg) {
    int pro = 1;
	int first_min=1;
	int last_min=1;
	int first_val=0;
	int last_val=0;
	int n=1;
	if(low == high) return arr[low];
	if(low>high) return INT_MIN;
	for(int i= low ; i<= high; i++) {
		if(arr[i]<0 ) {
			
			if(n==1){
				first_min = arr[i];
				first_val = pro;
			}
			if(n==n_neg) {
				last_min=arr[i];
				last_val=pro*arr[i];
			}

			n++;
		}
		pro*=arr[i];
	}
	if(n_neg%2==0) return pro;
	last_val=(pro/last_val);
	return max(max(first_val,last_val),max((pro/(first_val*first_min)), (pro/(last_val*last_min))));
		
}
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	vector<pair<pair<int,int>,int>> vec;
	int st=0;
	int count_n=0;
	int ans=INT_MIN;
	for(int i=0; i<n; i++) {
        if(arr[i]==0) {
			ans=0;
			vec.push_back({{st,i-1},count_n});
			st=i+1;
			count_n=0;
		}
		else if(arr[i]<0) count_n++;
	}
	vec.push_back({{st,n-1},count_n});
	
	for(int i=0; i<vec.size(); i++) {
       ans=max(ans,fn(arr,vec[i].first.first,vec[i].first.second,vec[i].second));
	}
	return ans;

}

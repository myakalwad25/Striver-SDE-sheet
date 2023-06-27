#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	// Write your code here.	
	int n = str.size();
	stack<string> stk;
	string temp="";
	for(int i=0; i<n; i++) {
		if(str[i]!=' ') {
			temp+=str[i];
		}
		else {
			if(temp!="") {
				stk.push(temp);
				temp="";
			}
		}
	}
	if(temp.size()!=0) stk.push(temp);
	string ans="";
	while(!stk.empty()) {
		ans+=stk.top();
		stk.pop();
		if(!stk.empty()) ans+=" ";
	}
	//ans.pop_back();
	return ans;
}
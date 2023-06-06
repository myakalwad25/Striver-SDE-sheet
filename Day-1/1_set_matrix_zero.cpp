#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	
	map<int,int> row;
	map<int,int> col;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(matrix[i][j]==0) {
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(row.count(i)!=0 || col.count(j)!=0) {
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}
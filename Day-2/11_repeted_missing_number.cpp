#include<bits/stdc++.h>
using namespace std;

vector<int> repeted_missing_number(vector<int>& A){
        vector<int> vec;
        int res=0;
        int sum=0;
        int req=0;
        for(int i=0; i<A.size(); i++) {
            res=res^A[i]^i;
            sum+=A[i];
            req+=A[i];
        }
        vec.push_back(res);
        vec.push_back(res+(req-sum));
        return vec;
}
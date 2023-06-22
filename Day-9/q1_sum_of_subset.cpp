#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

void fn(vector<int>& num, int ind, int sum, vector<int>& vec) {
     if(ind==num.size()) {
         vec.push_back(sum);
         return ;
     }
     // not take 
     fn(num,ind+1,sum,vec);
     //take;
     fn(num,ind+1,sum+num[ind],vec);

}
vector<int> subsetSum(vector<int> &num)
{   vector<int> vec;
    fn(num,0,0,vec);
    sort(vec.begin(),vec.end());
    return vec;
}
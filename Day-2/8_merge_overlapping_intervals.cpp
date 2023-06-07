#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

// code by vijay myakalwad
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int len = intervals.size();
    for(int i=0; i<len; i++) {
        // cout<<"hi";
        // cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        if(intervals[i][0]>intervals[i][1]) {
            //cout<<"hiii"<<endl;
            int temp=intervals[i][0];
            intervals[i][0]=intervals[i][1];
            intervals[i][1]=temp;
            cout<<intervals[i][0]<<"->"<<intervals[i][1]<<endl;
        }
        
    }
    sort(intervals.begin(),intervals.end());
    for(int i=0; i<len; i++) {
       // cout<<intervals[i][0]<<"-> "<<intervals[i][1]<<endl;
    }
    int count=0;
    int flag=1;
    while(count<len) {
        
        int st=intervals[count][0];
        int ed=intervals[count][1];
        count++;
        while(1) {
            if(count<len && intervals[count][0]<=ed){
                ed=max(ed,intervals[count][1]);
                count++;
            }
            else {
                vector<int> vec;
                vec.push_back(st);
                vec.push_back(ed);
                ans.push_back(vec);
                if(count>=len) flag=1;
                break;
            }
            
            
        }
        

    }
    return ans;
}

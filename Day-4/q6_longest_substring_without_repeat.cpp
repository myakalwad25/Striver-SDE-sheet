#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad 

int uniqueSubstrings(string input)
{
    //Write your code here
    map<char,int> mp;
    int n = input.size();
    // for(int i=0; i<n; i++) {
    //     mp[input[i]]=i;
    // }
    int prev=0;
    int maxi=1;
    int len=0;
    for(int i=0; i<n; i++) {
        if(mp.count(input[i])==0) {
            mp[input[i]]=i;
            len++;
        }
        else {
            if(mp[input[i]]<prev) {
                mp[input[i]]=i;
                len++;
            }
            else {
               
            //    cout<<i<<" "<<mp[input[i]]<<"-->";
            //    cout<<len<<endl;
               maxi=max(maxi,len);
               len=i-mp[input[i]];
               prev=mp[input[i]]+1;
               mp[input[i]]=i;
               
               
            }
        }
    }
    maxi=max(maxi,len);
    return maxi;
    

}
#include <bits/stdc++.h> 
using namespace std;

 // code by vijay myakalwad
 
int maximumProfit(vector<int> &prices){
   
    int buy=prices[0];
    int sell=prices[0];
    int ans=0;
    for(int i=1; i<prices.size(); i++) {
        if(prices[i]<buy) {
            int prf=sell-buy;
            ans=max(ans,prf);
            buy=prices[i];
            sell=prices[i];
        }
        else if(prices[i]>sell) {
            sell=prices[i];
        }
    }
    ans=max(ans,sell-buy);
    return ans;

}
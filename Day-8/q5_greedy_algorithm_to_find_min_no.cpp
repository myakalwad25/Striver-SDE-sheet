#include <bits/stdc++.h>
using namespace std;

// code by vijay myakalwad;

int findMinimumCoins(int amount) 
{
    // Write your code here
    int ans=0;
   
        
        int ths=(amount/1000);
        ans+=ths;
        amount-=(ths*1000);
        int five_hun=(amount/500);
        ans+=five_hun;
        amount-=(five_hun*500);
        int hun=(amount/100);
        ans+=hun;
        amount-=(hun*100);
        int fifty=(amount/50);
        ans+=fifty;
        //cout<<fifty;
        amount-=(fifty*50);
        int twenty=(amount/20);
        ans+=twenty;
        //cout<<twenty;
        //cout<<"hI"<<endl;
        amount-=(twenty*20);
        int ten=(amount/10);
        ans+=ten;
        //cout<<ten;
        amount-=(ten*10);
        int five=(amount/5);
        //cout<<"yes"<<endl;
        ans+=five;
        //cout<<five;
        amount-=(five*5);
        int two=(amount/2);
        ans+=two;
       // cout<<two;
        amount-=(two*2);
        ans+=amount;
       // cout<<amount<<endl;
        return ans;
    
}

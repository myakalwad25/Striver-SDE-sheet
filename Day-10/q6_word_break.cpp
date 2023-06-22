#include <bits/stdc++.h> 
using namespace std;


//code by vijay myakalwad
void fn(string&s, int st, map<string,string>& mp, string sen, int len, vector<string>& ans) {
    if(st>=len) {
        ans.push_back(sen);
        return ;
    }
    string str="";
    for(int i=st; i<len; i++) {
        str+=s[i];
        if(mp.find(str)!=mp.end()) {
            
           
            if(sen.size()==0) 
                fn(s,i+1,mp,sen+str,len,ans);
            else  
            fn(s,i+1,mp,sen+" "+str,len,ans);
           
            
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    map<string,string> mp;
    int len = s.size();
    for( auto word : dictionary) {
        mp.insert({word,word});
    }
    vector<string> ans;
    string sen="";
    fn(s,0,mp,sen,len,ans);
    return ans;

}
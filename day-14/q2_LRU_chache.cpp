#include<bits/stdc++.h>
using namespace std;
class LRUCache
{


public:
     unordered_map<int,pair<int,int>> mp;
    map<int,int> index;
    int len=0;
    int max_len;
    int operation=0;
    LRUCache(int capacity)
    {
        max_len=capacity;
    }

    int get(int key)
    {
         operation ++;
        if(mp.find(key)!=mp.end()) {
            int prev_opr=mp[key].second;
            mp[key].second=operation;
            index.erase(prev_opr);
            index[operation]=key;
            return mp[key].first;
        }
        return -1;
    }

    void put(int key, int value)
    {
         operation++;
        if(mp.find(key)!=mp.end()) {
            int prev_opr=mp[key].second;
            mp[key].second=operation;
            mp[key].first=value;
            index.erase(prev_opr);
            index[operation]=key;
        }
        else {
            if(len==max_len) {
                auto it=index.begin();
                int prev_opr=it->first;
                int k=it->second;
                index.erase(prev_opr);
                mp.erase(k);
                mp[key]={value,operation};
                index[operation]=key;
            }
            else {
                mp[key]={value,operation};
                index[operation]=key;
                len++;     
            }
        }
    }
};

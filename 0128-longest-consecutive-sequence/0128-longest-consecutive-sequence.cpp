#include<bits/stdc++.h>
#define prioq priority_queue
#define pb push_back

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0 )
            return 0;
        
        
        map<int,int> mp;
        for(int x : nums) {
            mp[x] = 1;
            
        }
        
        int i =0 ;
        int prevK;
        int cnt = 1;
        int maxm = 1;
        
        prioq<int> pq;
        
        for(auto kv : mp) {
            if(i == 0) {
                prevK = kv.first;
                i++;
                continue;
            
            }
            if(kv.first - prevK == 1)
                cnt++;
            else{
               
                cnt = 1;
            }
            
             if(cnt > maxm){
                    maxm =cnt;
            }
            
            prevK = kv.first;
            
            i++;
            
        }
        
        return maxm;
        
    }
};
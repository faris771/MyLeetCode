#include <bits/stdc++.h>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size();i++) {
            
            mp[nums[i]] ++;
                
        
        
        }
        int cnt =0 ;    
            
        priority_queue<pair<int,int>> q;
    
        for(auto x : mp) {
            
            q.push({x.second,x.first});
            
            
        }
        
        vector<int> ans;

        for(int i=0;i<k;i++) {
            // cout << q.top();
            ans.push_back(q.top().second);
            q.pop();
            
            
            
        }
        
        
        
        
        
        
        
        return ans;
    }
        
        
        
        
};
